#include <bits/stdc++.h>
using namespace std;
int to_five(string s) {
	int n = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '6') {
			s[i] = '5';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}
int to_six(string s) {
	int n = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '5') {
			s[i] = '6';
		}
		 n = n * 10 + s[i] - '0';
	}
	return n;
}
int main() {
	string a, b;
	cin >> a >> b;
	cout << to_five(a) + to_five(b) << " " << to_six(a) + to_six(b); 
    return 0;
}

