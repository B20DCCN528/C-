#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long a[n], s = 0, mod = 1e9 + 7;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++) {
			s = (s + a[i] * i) % mod;
		}
		cout << s << "\n";
	}
    return 0;
}

