#include <bits/stdc++.h>
using namespace std;
string ts = "+-*/";
bool check(char c){
	for(int i = 0; i < ts.size(); i++){
		if(ts[i] == c){
			return 1;
		}
	}
	return 0;
}
bool Var(char c){
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
int main() {
		int t;
		cin >> t;
		while(t--){
			string s, k;
			cin >> s;
			stack<string> st;
			for(int i = s.size() - 1; i >= 0; i--){
				if(check(s[i])){
					k = '(' + st.top();
					st.pop();
					k += s[i];
					k = k + st.top() + ')';
					st.pop();
					st.push(k); 
				}
				else{
					st.push(string(1, s[i]));
				}
			}
			cout << st.top() << "\n";
		}
    return 0;
}

