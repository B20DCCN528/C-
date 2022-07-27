#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		long long f[k + 1] = {}, mod = 1e9 + 7;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		f[0] = 1;
		for(int i = 1; i <= k; i++) {
			for(int j = 0; j < n; j++) {
				if(i >= a[j]) {
					f[i] = (f[i] + f[i - a[j]]) % mod;
				}
			}
		}
		cout << f[k] << "\n";
	}
    return 0;
}

