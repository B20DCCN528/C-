#include <iostream>
#include <math.h>
#include <string>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	string a;
	set<string> s;
	for(int i = 0; i < t; i++){
		getline(cin,a);
		s.insert(a);
	}
	cout << s.size();
    return 0;
}

