#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		char s;
		cin >> s;
		if(s >= 'a' && s <= 'z') {
			s = s - 32;
		}
		else if(s >= 'A' && s <= 'Z'){
			s = s + 32;
		}
		cout << s << "\n";
	}
    return 0;
}

