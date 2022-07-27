#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n), l(n, -1), r(n, -1);
		stack<int> b, c;
		for(int i = 0; i <n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			while(!b.empty() && a[i] > a[b.top()]) {
				l[b.top()] = i;
				b.pop();
			}
			b.push(i);
		}
		for(int i = 0; i < n; i++) {
			while(!c.empty() && a[i] < a[c.top()]) {
				r[c.top()] = i;
				c.pop();
			}
			c.push(i);
		}
		for(int i = 0; i < n; i++) {
			if(l[i] == -1 || r[l[i]] == -1) {
				cout << -1 << " ";
			}
			else {
				cout << a[r[l[i]]] << " ";
			}
		}
		cout << "\n";
	}
    return 0;
}

