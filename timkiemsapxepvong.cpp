#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int c[a];
		for(int i = 0; i < a; i++){
			cin >> c[i];
		}
		int x = 0;
		for(int i = 0; i < a; i++){
			if(c[i] == b){
				cout << i + 1 << "\n";
				x = 1;
				break;
			}
		}
		if(x == 0){
			cout << -1 << "\n";
		}
	}

    return 0;
}

