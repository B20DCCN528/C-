#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	stack<int> st;
	while(t--) {
		cin >> s;
		if(s == "PUSH") {
			cin >> n;
			st.push(n);
		}
		else if(s == "POP") {
			if(st.size()) {
				st.pop();
			}
		}
		else if(s == "PRINT") {
			if(st.size()) {
				cout << st.top() << "\n";
			}
			else {
				cout << "NONE" << "\n";
			}
		}
	}
    return 0;
}

