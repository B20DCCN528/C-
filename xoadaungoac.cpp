#include <bits/stdc++.h>
using namespace std;
map<int, pair<int, int>> brackets;
vector<string> configs;
string removebracket(string s, string tmp) {
	vector<bool> dd(s.size(), true);
	for(int i = 0; i < tmp.size(); i++) {
		if(tmp[i] == '0') {
			pair<int, int> bracket = brackets[i];
			dd[bracket.first] = dd[bracket.second] = false;
		}
	}
	string res = "";
	for(int i = 0; i < dd.size(); i++) {
		if(dd[i] == true) {
			res += s[i];
		}
	}
	return res;
}
void bingen(int index, string s) {
	if(index == s.size()) {
		configs.push_back(s);
		return;
	}
	for(int j = 0; j <= 1; j++) {
		s[index] = j + '0';
		bingen(index + 1, s);
	}
}
void testcase() {
	string s;
	cin >> s;
	stack<pair<int, int>> st;
	int cnt = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(') {
			brackets[cnt].first = i;
			st.push({cnt, i});
			cnt++;
		}
		else if(s[i] == ')') {
			int x = st.top().first;
			st.pop();
			brackets[x].second = i;
		}
	}
	string tmp = string(cnt, '0');
	bingen(0, tmp);
	configs.pop_back();
	map<string, bool> res;
	for(int i = 0; i < configs.size(); i++){
		string z = removebracket(s, configs[i]);
		res[z] = true;
	} 
	for(auto i : res) {
		cout << i.first << "\n";
	}
}
int main() {
	int t = 1;
	while(t--) {
		testcase();
		cout << "\n";
	}
    return 0;
}

