#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main() {
	set<string> se;
	string ma;
	while( cin >> ma){
		for(int i = 0; i < ma.size(); i++){
			if(ma[i] >= 65 && ma[i] <= 90){
				ma[i] = ma[i] + 32;
			}
		}
		se.insert(ma);
		
	}
	for(auto x : se){
		cout << x << endl;
	}

    return 0;
}

