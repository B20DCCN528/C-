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
		int n = 0;
		stringstream b(c);
		while(b>>token){
			a[n++] = token;
		}
		for(int i = n - 1; i >= 0; i--){
			cout << a[i] << " ";
		}
		cout << endl;
	}

    return 0;
}

