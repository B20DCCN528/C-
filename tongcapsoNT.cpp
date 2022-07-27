#include <iostream>
#include <math.h>
using namespace std;
bool snt(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n, ok = 0;
		cin >> n;
		for(int i = 2; i <= n/2; i++){
			if(snt(i) == 1 && snt(n-i) == 1){
				ok = 1;
				cout << i << " " << n - i << endl;
				break;
			}
		}
		if(ok == 0){
			cout << -1 << endl;
		}
	}
    return 0;
}

