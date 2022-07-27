#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	string s;
	deque<int> dq;
	while(n--) {
		cin >> s;
		if(s == "PUSHFRONT") {
			cin >> x;
			dq.push_front(x);
		}
		else if(s == "PRINTFRONT") {
			if(dq.size()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << "NONE" << "\n";
			}
		}
		else if(s == "POPFRONT") {
			if(dq.size()) {
				dq.pop_front();
			}
		}
		else if(s == "PUSHBACK") {
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "PRINTBACK") {
			if(dq.size()) {
				cout << dq.back() << "\n";
			}
			else {
				cout << "NONE" << "\n";
			}
		}
		else if(s == "POPBACK") {
			if(dq.size()) {
				dq.pop_back();
			}
		}
	}
    return 0;
}

