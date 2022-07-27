#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		stack<int> st;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '(' || s[i] == '[') {
				st.push(s[i]);
			}
			else if(s[i] == ')') {
				if(!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
			else if(s[i] == ']') {
				if(!st.empty() && st.top() == '[') {
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
		}
		if(st.empty()){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
    return 0;
}

