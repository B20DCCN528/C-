#include <iostream>
#include <math.h>
#include <string>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c; cin >> c;
		int k;	cin >> k;
		if(c.size() < 26){
			cout << 0 << endl; continue;
		}
		set<char> se;
		for(int i = 0; i < c.size(); i++){
			se.insert(c[i]);
		}
		if(26-se.size() <= k){
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	
		
	} 

    return 0;
}

