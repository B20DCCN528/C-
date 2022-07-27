#include <bits/stdc++.h>
using namespace std;
bool Var(char c) {
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s, k;
		cin >> s;
		stack<string> st;
		for(int i = 0; i < s.size(); i++) {
			if(Var(s[i])) {
				st.push(string(1, s[i]));
			}
			else {
				k = st.top();
				st.pop();
				k = s[i] + k;
				k = st.top() + k;
				st.pop();
				st.push(k);
			}
		}
		cout << st.top() << "\n";
	}
    return 0;
}

