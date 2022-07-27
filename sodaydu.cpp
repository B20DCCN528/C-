#include <iostream>
#include <math.h>
#include <string>
#include <cctype>
#include <set>
using namespace std;
int check(string s){
	if(s[0] == '0'){
		return -1;
	}
	set<char> se;
	for(char x : s){
		if(!isdigit(x)){
			return -1;
		}
		se.insert(x);
		
	}
	return se.size() == 10;
	
}

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int res = check(s);
		if(res == -1) cout << "INVALID\n";
		else if(res == 0) cout << "NO\n";
		else cout << "YES\n";
	}

    return 0;
}

