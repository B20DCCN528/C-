#include <bits/stdc++.h>
using namespace std;
void check(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n][m];
	vector<int> res;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int h1 = 0, h2 = n - 1, c1 = 0,c2 = m - 1;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			res.push_back(a[h1][i]);
		}
		h1++;
		for(int i = h1; i <= h2; i++){
			res.push_back(a[i][c2]);
		}
		c2--;
		if(h1 <= h2){
			for(int i = c2; i >= c1; i--){
				res.push_back(a[h2][i]);
			}
			h2--;
		}
		if(c1 <= c2){
			for(int i = h2; i >= h1; i--){
				res.push_back(a[i][c1]);
			}
			c1++;
		}
	}
	cout << res[k-1];
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}

    return 0;
}

