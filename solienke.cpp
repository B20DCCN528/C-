#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int x = 1;
		for(int i = 1; i < s.size(); i++){
			if(abs(s[i] - s[i-1]) != 1){
				x = 0;
				break;
			}
		}
		if(x == 1){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

    return 0;
}

