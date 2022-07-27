#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		int n = 0;
		int c = 0, l = 0;
		char kitu = ' ';
		while(kitu != '\n'){
			int x;
			cin >> x;
			n++;
			if(x % 2 == 0){
				c++;
			}
			else {
				l++;
			}
			kitu = getchar();
		}
		if((n%2 == 0 && c>l) || (n%2==1) && l > c){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

    return 0;
}

