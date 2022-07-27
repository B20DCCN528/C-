#include <bits/stdc++.h>
using namespace std;
void testcase() {
	string s;
	cin >> s;
	stack<string> st;
	for(int i = 0; i < s.size(); i++){
		string x = string(1, s[i]);
		if(x == "+" || x == "-" || x == "*" || x == "/"){
			string b = st.top();
			st.pop();
			string a = st.top();
			st.pop();
			string c = x + a + b;
			st.push(c);
		}
		else {
			st.push(x);
		}
	}
	cout << st.top();
}
int main() {
	int t;
	cin >> t;
	while(t--){
		testcase();
		cout << "\n";
	}
    return 0;
}

