#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		stack<char> st;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ')' || s[i] == '(') {
				st.push(s[i]);
			} 
		}
		int dem = 0, check = 0, ans = 0;
		for(int i = 0; i < s.size(); i++)  {
			for(int j = i; j < s.size(); j++) {
				if(s[j] == '(' && s[j + 1] == ')'){
					check = 1;
					break;
				}
				if( s[i] == '(' && st.top() == ')') {
					dem++;
					st.pop();
				}
			}
			if(check == 1) {
				break;
			}
			ans = max(ans, dem);
		}
		if(check == 1) {
			cout << -1 <<  "\n";
		}
		else {
			cout << ans << "\n";
		}
	
	}
    return 0;
}

