#include <bits/stdc++.h>
using namespace std;
void testcase() {
	int v, e, x, y;
	cin >> v >> e;
	vector<vector<int>> g(v + 1);
	while(e--){
		cin >> x >> y;
		g[x].push_back(y);
	}
	for(int i = 1; i <= v; i++){
		cout << i << ": ";
		for(int j : g[i]){
			cout << j << " ";
		
		}
		cout << "\n";
	}
}
int main() {
	int t = 1; cin >> t;
	while(t--){
		testcase();
		cout << "\n";
	}
    return 0;
}

