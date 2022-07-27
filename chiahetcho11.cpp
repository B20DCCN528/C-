#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void check(string c){
	int x = c.size();
	int le = 0, chan = 0;
	for(int i = 0; i < x; i++){
		if(i%2==0){
			chan = chan + c[i] - 48;	
		}
		else {
			le = le + c[i] - 48;
		}
	}
	if(abs(chan-le)%11==0){
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}
}
int main() {
	int t;
	cin >> t;
	while(t--){
		string c;
		cin >> c;
		check(c);
		
	}

    return 0;
}

