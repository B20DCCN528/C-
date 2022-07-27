#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c;
		cin >> c;
		for(int i = 0; i < c.size() - 2; i++){
			if(c[i] == '0' && c[i+1] == '8' && c[i+2] == '4'){
				c[i] = c[i+1] = c[i+2] = 'x';
 			}
		} 
		for(int i = 0; i < c.size(); i++){
			if(c[i] != 'x') {
				cout << c[i];
			}
		}
		cout << endl;
	} 
    return 0;
}

