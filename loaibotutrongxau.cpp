#include <iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
	string a, c[1000], token, g;
	getline(cin, a);
	cin >> g;
	int n = 0;
	stringstream b(a);
	while(b >> token){
		c[n++]=token;
	}
	for(int i = 0; i < n; i++){\
		if(c[i] != g){
			cout << c[i] << " ";
		}
		
	}

    return 0;
}

