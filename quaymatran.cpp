#include <iostream>
#include <math.h>
#include <map>
#include<set>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.first != b.first){
		return a.first < b.first;
	}
	else return a.second > b.second;
}
void check(){
	int m,n;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
	while(h1 < h2 && c1 < c2){
		if(h1 == h2 || c1 == c2){
			break;
		}
		int pre = a[h1 + 1][c1];
		for(int i = c1; i <= c2; i++){
			int cur = a[h1][i];
			a[h1][i] = pre;
			pre = cur;
		}
		h1++;
		for(int i = h1; i <= h2; i++){
			int cur = a[i][c2];
			a[i][c2] = pre;
			pre = cur;
		}
		c2--;
		if(h1 <= h2){
			for(int i = c2; i >= c1; i--){
				int cur = a[h2][i];
				a[h2][i] = pre;
				pre = cur;
			}
		}
		h2--;
		if(c1 <= c2){
			for(int i = h2; i >= h1; i--){
				int cur = a[i][c1];
				a[i][c1] = pre;
				pre = cur;
			}
		}
		c1++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
	}
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

