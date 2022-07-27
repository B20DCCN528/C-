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
		int c[a*a];
		for(int i = 0; i < a*a; i++){
				cin >> c[i];				
		}
		sort(c,c+a*a);
		cout << c[b-1];
		cout << endl;
	}

    return 0;
}

