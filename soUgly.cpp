#include <bits/stdc++.h>
using namespace std;

int main() {
	set<long long> s;
	vector<long long> v;
	s.insert(1);
	while(1) {
		for(auto i : s) {
			if(i > 1e18) {
				break;
			}
			v.push_back(i * 2);
			v.push_back(i * 3);
			v.push_back(i * 5);
		}
		for(auto i : v) {
			s.insert(i);
		}
		v.clear();
		if(s.size() > 1e4) {
			break;
		}
	}
	for(auto i : s) {
		v.push_back(i);
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << v[n - 1] << "\n";
	}
    return 0;
}

