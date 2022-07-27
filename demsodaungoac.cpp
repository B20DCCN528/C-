#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<char> st;
		if(s.size() % 2 == 1) {
			cout << -1 << "\n";
			continue;
		}
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ')' && !st.empty()) {
				if(st.top() == '(') {
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
			else {
				st.push(s[i]);
			}
		}
		int k = st.size(), n = 0;
		while(!st.empty() && st.top() == '(') {
			st.pop();
			n++;
		}
		cout << (k / 2 + n % 2) << "\n";
	}
    return 0;
}

