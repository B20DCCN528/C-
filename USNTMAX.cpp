#include <iostream>
#include <math.h>
using namespace std;
long long  solve(long long  n){
	long long res;
	for(int i = 2; i <= sqrt(n);i++){
		while(n%i==0){
				res = i;
		n = n / i;
		} 
	
	}
	if(n != 1){
	res = n;
	}
	return res;
}


int main() {
	int t;
	cin >> t;
	while(t--){
		long long  n;
		cin >> n;
		cout << solve(n) << "\n";
	}

    return 0;
}

