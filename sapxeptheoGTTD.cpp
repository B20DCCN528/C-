#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		vector<pair<int, int>> v(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			v[i].first = abs(a[i] - k);
			v[i].second = i;
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++) {
			cout << a[v[i].second] << " ";
		} 
		cout << "\n";
	}
    return 0;
}

