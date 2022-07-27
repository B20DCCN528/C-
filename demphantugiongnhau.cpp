#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		map<int,int> mp;
		for(int i = 0; i < n; i++){
			mp[a[0][i]] = 1;
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mp[a[i][j]] == i){
					mp[a[i][j]]++;
				}
			}
		}
		for(auto it : mp){
			if(it.second == n){
				cnt++;
			}
		}
		cout << cnt << endl;
	}

    return 0;
}

