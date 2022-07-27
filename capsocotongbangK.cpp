#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, x, ans = 0;
		cin >> n >> k;
		vector<int> a(n);
		for(int &i : a) {
			cin >> i;
		}
		sort(a.begin(), a.end());
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(a[i] + a[j] == k) {
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
    return 0;
}

