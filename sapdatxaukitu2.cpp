#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int k;
		string s;
		cin >> k >> s;
		int a[30] = {}, MAX = 0;
		for(int i = 0; i < s.size(); i++) {
			a[s[i] - 'A']++;
		}
		for(int i = 0; i < 30; i++) {
			MAX = max(MAX, a[i]);
		}
		if(MAX * k > s.size() + 1) {
			cout << -1 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
    return 0;
}

