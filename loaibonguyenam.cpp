#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int r = s.size();
	for(int i = 0; i < r; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] + 32;
		}
	}
	for(int i = 0; i < r; i++){
		if(s[i] != 'u' && s[i] != 'a' && s[i] != 'e' && s[i] != 'y' && s[i] != 'o' && s[i] != 'i'){
			cout << '.' << s[i];
		}
	}

    return 0;
}

