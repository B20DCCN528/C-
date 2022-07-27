#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n==0 || n == 1){
			cout << "YES\n";
			continue;
		}
		long long fn = 1, f1 = 1, f0 = 0;
		while(fn < n){
			fn = f1 + f0;
			f0 = f1;
			f1 =fn;
		}
		if(fn == n){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

    return 0;
}

