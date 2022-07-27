#include <bits/stdc++.h>
using namespace std;
int V, E, u, v;
vector<vector<int>> G;
vector<bool> vs;

void dfs(int s) {
	stack<int> st;
	st.push(s);
	vs[s] = 1;
	
	while(!st.empty()) {
		u = st.top();
		st.pop();
		for(int v : G[u]) {
			if(!vs[v]) {
				vs[v] = 1;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
void testcase() {
	cin >> V >> E;
	G.clear();
	G.resize(V + 1);
	while(E--) {
		cin >> u >> v;
		G[u].push_back(v);
	}
	for(int i = 1; i <= V; i++){
		vs.clear();
		vs.resize(V + 1, 0);
		dfs(i);
		for(int j = 1; j <= V; j++) {
			if(!vs[j]) {
				cout << "NO";
				return;
			}
		}
	}
	cout << "YES";
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		testcase();
		cout << "\n";
	}
    return 0;
}

