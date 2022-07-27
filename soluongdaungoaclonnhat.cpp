#include <bits/stdc++.h>
using namespace std;

int main() {
		string s;
		cin >> s;
		stack<int> st;
		st.push(-1);
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ')' && !st.empty() && s[st.top()] == '(') {
				st.pop();
			}
			else if(s[i] == ']' && !st.empty() && s[st.top()] == '[') {
				st.pop();
			}
			else {
				st.push(i);
			}
		}
			st.push(s.size());
			vector<int> v;
			while(!st.empty()) {
				v.push_back(st.top());
				st.pop();
			}
			reverse(v.begin(), v.end());
			int k = 0;
			for(int i = 1; i < v.size(); i++){
				int cnt = 0;
				for(int j = v[i-1] + 1; j < v[i]; j++){
					if(s[j] == '[') {
						cnt++;
					}
				}
				k = max(k, cnt);
			}
			cout << k;
    return 0;
}

