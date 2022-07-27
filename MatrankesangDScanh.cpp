#include <iostream>
#include <math.h>
#include <vector>
#include <map>
using namespace std;
int m,n;
vector<int> adj[1001];
vector<pair<int,int>> edge;
int a[1001][1001];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] && i < j){
				edge.push_back({i, j});
			}
		}
	}
	for(auto it : edge){
		cout << it.first << " " << it.second << endl;
	}

    return 0;
}

