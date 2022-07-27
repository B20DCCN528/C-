#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n;
		long long s = 0;
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i = 0; i < n; i++) {
			cin >> x;
			q.push(x);
		}
		cout << "\n";
		while(q.size() > 1) {
			int s1 = q.top();
			q.pop();
			int s2 = q.top();
			q.pop();
			int k = s1 + s2;
			s += k;
			q.push(k);
		}
		cout << s << "\n";
		
	}
    return 0;
}

