#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void hoa(string &s){
	s[0] = toupper(s[0]);
}
int main() {
	string h;
	cin >> h;
	hoa(h);
	cout << h;

    return 0;
}

