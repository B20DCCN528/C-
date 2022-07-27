#include <bits/stdc++.h>
using namespace std;
void testcase() {
	string s;
	getline(cin, s);
	int index = 0;
	stack<int> st;
	vector<int> res;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			index++;
			st.push(index);
			res.push_back(index);
		}
		else if(s[i] == ')'){
			res.push_back(st.top());
			st.pop();
		}
	}
	for(int i : res){
		cout << i << " ";
	}
}
int main() {
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--){
		testcase();
		cout << "\n";
	}
    return 0;
}

