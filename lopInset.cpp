#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x;
	set<int> s1, s2;
	ifstream f1;
	f1.open("DATA.in");
	f1 >> n >> m;
	for(int i = 0; i < n; i++){
		f1 >> x;
		s1.insert(x);
	}
	for(int i = 0; i < m; i++){
		f1 >> x;
		s2.insert(x);
	}
	map<int, int> mp;
	for(auto x : s1){
		mp[x]++;
	}
	for(auto x : s2){
		mp[x]++;
	}
	for(auto x : mp){
		if(x.second == 2){
			cout << x.first << " ";
		}
	}

    return 0;
}

