#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, x;
		cin >> n >> m;
		map<int, int> a, b, c;
		for(int i = 0; i < n; i++) {
			cin >> x;
			a[x]++;
			c[x]++;
		}
		for(int i = 0; i < m; i++) {
			cin >> x;
			b[x]++;
			c[x]++;
		}
		for(auto i : c) {
			cout << i.first << " ";
		}
		cout << "\n";
		for(auto i : a) {
			if(b[i.first] > 0) {
				cout << i.first << " ";
			}
		}
		cout << "\n";
	} 
    return 0;
}

