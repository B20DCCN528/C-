#include <bits/stdc++.h>
using namespace std;
vector<int> check(10000, 1);
void era()
 {
 	for(int i = 2; i * i <= 9999; i++) {
 		if(check[i]) {
 			for(int j = i * i; j <= 9999; j = j + i) {
 				check[j] = 0;
			 }
		 }
	 }
}
int to_int(string s) {
	int n = 0;
	for(int i = 0; i < s.size(); i++) {
		n = n * 10 + s[i] - '0';
	}
	return n;
}
 int main() {
	int t;
	era();
	cin >> t;
	while(t--) {
		string st, ed, s;
		cin >> st >> ed;
		pair<string, int> u, v;
		queue<pair<string, int>> q;
		map<string, int> m;
		m[st]++;
		q.push({st, 0});
		while(q.size()) {
			u = q.front();
			q.pop();
			s = u.first;
			if(s == ed) {
				cout << u.second << "\n";
				break;
			}
			for(int i = 0; i < 4; i++) {
				int pos = 0;
				if(i == 0) {
					pos++;
				}
				for(int j = pos; j <= 9; j++) {
					s[i] = j + '0';
					if(!m[s] && check[to_int(s)]) {
						m[s]++;
						q.push({s, u.second + 1});
					}
				}
				s = u.first;
			}
		}
	}
	return 0;
}

