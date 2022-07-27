#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<long long> a(n + 2);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		a[n + 1] = 1e18;
		int ans = lower_bound(a.begin(), a.end() - 1, k) - a.begin();
		if(a[ans] != k) {
			ans--;
		}
		if(ans != -1) {
			ans++;
		}
		cout << ans << "\n";
	}
    return 0;
}

