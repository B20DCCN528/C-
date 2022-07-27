#include <iostream>
#include <math.h>
#include<string>
#include <sstream> 

using namespace std;

int main() {
	string a, token , c[1000];
	getline(cin, a);
	int x = a.size();
	for(int i = 0; i < x; i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] = a[i] + 32;
		}
	}
	stringstream b(a);
	int n = 0;
	while(b >> token){
		c[n++] = token;
	}

	cout << c[n-1];
	for(int i = 0; i < n - 1; i++){
		cout << c[i][0];
	}
	cout << "@ptit.edu.vn";

    return 0;
}
