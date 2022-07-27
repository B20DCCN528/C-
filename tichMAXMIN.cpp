#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, m, x, maxa = -1e9, minb = 1e9;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			cin >> x;
			maxa = max(maxa,x);
		}
		for(int i = 0; i < m; i++){
			cin >> x;
			minb = min(minb,x);
		}
		cout << (long long)maxa * minb << endl;
	}
    return 0;
}

