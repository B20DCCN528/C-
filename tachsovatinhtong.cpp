#include <iostream>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string k = "";
		int cnt = 0, sum = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])){
				sum = sum + s[i] - '0';
			}
			else {
				k = k + s[i];
			}
		}
		sort(k.begin(), k.end());
		
		for(int i = 0; i < k.size(); i++){
			cout << k[i];
		}
		cout << sum << endl;
	}

    return 0;
}

