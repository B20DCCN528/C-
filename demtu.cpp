#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c, token, a[10000];
		getline(cin, c);
		int x = 0;
		stringstream b(c);
		while(b >> token){
			a[x++] = token;
		}
		
		cout << x << endl;
	}

    return 0;
}

