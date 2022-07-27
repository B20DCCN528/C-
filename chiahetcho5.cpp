#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string c;
		cin >> c;
		int r = 0;
		for(int i = 0; i < c.size(); i++){
			r = (2*r+c[i] -48 )%5;
		}
		if(r == 0){
			cout << "Yes" <<"\n";
		}
		else {
			cout << "No" <<"\n";
		}
		
	}

    return 0;
}

