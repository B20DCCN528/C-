#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s, k, ls, ans;
		cin >> s;
		int n;
		stack<char> st;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ']') {
				k = ls = ans = "";
				while(st.top() != '[') {
					k = st.top() + k;
					st.pop(); 
				}
				st.pop();
				while(st.size() && st.top() >= '0' && st.top() <= '9') {
					ls = st.top() + ls;
					st.pop();
				}
				n = 0;
				for(auto c : ls) {
					n = n * 10 + c - '0';
				}
				if(n == 0) {
					n++;
				}
				for(int j = 0; j < n; j++) {
					ans += k;
				}
				for(auto c : ans) {
					st.push(c);
				}
			}
			else {
				st.push(s[i]);
			}
		}
		ans = "";
		while(st.size()) {
			ans = st.top() + ans;
			st.pop();
		}
		cout << ans << "\n";
	}
    return 0;
}

