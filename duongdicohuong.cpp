#include <bits/stdc++.h>
using namespace std;
int V, E, s, t, u, v;
vector<vector<int>> G;
vector<bool> vs;
vector<int> tr;

void bfs(int s) {
	queue<int> q;
	q.push(s);
	vs[s] = true;
	while(!q.empty()) {
		u = q.front();
		q.pop();
		for(int v : G[u]) {
			if(!vs[v]) {
				q.push(v);
				vs[v] = true;
				tr[v] = u;
			}
		}
	}
}

void check(int t) {
	int l = t;
	stack<int> st;
	while(l != -1) {
		st.push(l);
		l = tr[l];
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> V >> E >> s >> t;
		G.assign(V + 1, {});
		vs.assign(V + 1, false);
		tr.assign(V + 1, -1);
		while(E--) {
			cin >> u >> v;
			G[u].push_back(v);
		}
		bfs(s);
		if(!vs[t]) {
			cout << -1;
		}
		else {
			check(t);
		}
		cout << "\n";
	}
    return 0;
}

