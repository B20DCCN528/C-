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
		int c[a], d[b];
		for(int i = 0; i < a; i++){
			cin >> c[i];
		}
		for(int i = 0; i < b; i++){
			cin >> d[i];
		}
		int x[a+b];
		for(int i = 0; i < a+b; i++){
			if(i < a){
				x[i] = c[i];
			}
			else {
				x[i] = d[i-a];
			}
		}
		sort(x, x + a + b);
		for(int i = 0; i < a+b; i++){
			cout << x[i] << " ";
		}
		cout << "\n";
	} 

    return 0;
}

