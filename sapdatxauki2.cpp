#include <iostream>
#include <math.h>
#include<string>
#include<algorithm>
using namespace std;
bool check(string s){
	int a[26] = {0};
	for(char x : s){
		a[x -'a']++;
	}
	int max_fre = *max_element(a, a+26);
	if(max_fre - 1 <= s.size() - max_fre){
		return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)){
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

    return 0;
}

