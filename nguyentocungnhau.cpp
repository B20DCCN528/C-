#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
	if( n < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int check(int n){
	int res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
			}
			res -= res/i;
		}
	}
	if(n != 1){
		res -= res/n;
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(snt(check(n))){
			cout << 1;
		}
		else {
			cout << 0;
		}
		cout << endl;
	}

    return 0;
}

