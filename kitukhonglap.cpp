#include <iostream>
#include <math.h>
#include <string>

using namespace std;
void check(string c){
	int x = c.size();
	int d[256];
	for(int i = 0; i < 256; i++){
		d[i] = 0;
	}
	for(int i = 0; i < x;i++){
		d[c[i]]++;
	}
	for(int i = 0; i < x; i++){
			if(d[c[i]] == 1){
				cout << c[i];
			}
		
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c;
		cin >> c;
		check(c);
		cout << endl;
	}

    return 0;
}

