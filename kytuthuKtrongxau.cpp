#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		long long a[n + 1];
		for(long long i = 1; i <= n; i++) {
			a[i] = pow(2, i - 1);
		}
		for(int i = n; i >= 1; i--) {
			if(k == a[i]) {
				cout << (char)(i + 'A' - 1) << "\n";
				break;
			}
			else if(k > a[i]) {
				k -= a[i];
			}
		}
	}
    return 0;
}

