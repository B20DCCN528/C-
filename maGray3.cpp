#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<string>> ans;
	vector<string> a;
	a.push_back("0");
	a.push_back("1");
	ans.push_back(a);
	for(int i = 0; i < 9; i++) {
		a.clear();
		for(int j = 0; j < ans[i].size(); j++) {
			a.push_back('0' + ans[i][j]);
		}
		for(int j = ans[i].size() - 1; j >= 0; j--) {
			a.push_back('1' + ans[i][j]);
		}
		ans.push_back(a);
	}
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		long long k = 0;
		for(int i = s.size() - 1; i >= 0; i--) {
			if(s[i] == '1') {
				k += (1 << (s.size() - 1 - i));
			}
		}
		cout << ans[s.size() - 1][k] << "\n";
	}
    return 0;
}

