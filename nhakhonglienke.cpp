#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n + 3], f[n + 3] = {};
		for(int i = 3;i <= n + 2; i++) {
			cin >> a[i];
			f[i] = max(f[i - 2], f[i - 3]) + a[i];
		}
		cout << max(f[n + 2], f[n + 1]) << "\n";
	}
    return 0;
}

