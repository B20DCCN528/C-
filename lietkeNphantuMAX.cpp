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
		sort(c, c + a);
		for(int i = a-1; i >= a-b; i--){
			cout << c[i] << " ";
		}
		cout << "\n";
	}
    return 0;
}

