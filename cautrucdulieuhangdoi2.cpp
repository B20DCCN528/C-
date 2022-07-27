#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	string s;
	deque<int> dq;
	while(n--) {
		cin >> s;
		if(s == "PUSH") {
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "PRINTFRONT") {
			if(dq.size()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << "NONE" << "\n";
			}
		}
		else if(s == "POP") {
			if(dq.size()) {
				dq.pop_front();
			}
		}
	}
	
    return 0;
}

