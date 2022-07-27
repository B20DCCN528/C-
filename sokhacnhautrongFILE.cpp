#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream a;
	a.open("DATA.in");
	map<int, int> mp;
	int x;
	while(a >> x){
		mp[x]++;
	}
	a.close();
	for(auto x : mp){
		cout << x.first << " " << x.second << "\n";
	}

    return 0;
}

