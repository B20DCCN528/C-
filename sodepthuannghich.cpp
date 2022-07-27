#include <iostream>
#include <math.h>
#include <stdbool.h>
#include <string>
#include <algorithm>
using namespace std;
bool check(string s){
	string t = s;
	reverse(s.begin(), s.end());
	if(s != t){
		return false;
	}
	int r = s.size();
	for(int i = 0;i < r; i++){
		if((s[i] - '0')%2==1){
			return false;
		}
	}
	return true;
}

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "YES\n";
		else cout << "NO\n";
	}

    return 0;
}

