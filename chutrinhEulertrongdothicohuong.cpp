#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, u, v, ok = 1;
		cin >> n >> m;
		int a[n + 1] = {};
		for(int i = 0; i < m; i++) {
			cin >> u >> v;
			a[u]++;
			a[v]--;
		}
		for(int i = 1; i <= n; i++){
			if(a[i] != 0) {
				ok = 0;
				cout << 0 << "\n";
				break;
			}
		}
		if(ok) {
			cout << 1 << "\n";
		} 
	}
    return 0;
}

