#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <limits.h>
using namespace std;
void solve(string s){
	int res = INT_MIN;
	s += "a";
	int val = 0;
	for(char x : s){
		if(isdigit(x)){
			val = val*10 + x - '0';
		}
		else {
			res = max(res, val);
			val = 0;
		}
	}
	cout << res << endl;
}
void process(){
	string s;
	cin >> s;
	solve(s);
}

int main() {
	int t;
	cin >> t;
	while(t--){
		process();
	}

    return 0;
}

