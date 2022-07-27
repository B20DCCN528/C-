#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int mu(int n){
	int res = 1;
	while(n--){
		res = res * 10;
	}
	return res;
}
int tang(int n){
	while(n >= 10){
		int r = n%10;
		if(r <= (n/10)%10){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int giam(int n){
	while(n >= 10){
		int r = n%10;
		if(r >= (n/10)%10){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		int n;
		cin >> n ;
		for(int i = mu(n-1); i < mu(n); i++){
			if((tang(i) || giam(i)) && snt(i) ){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}

