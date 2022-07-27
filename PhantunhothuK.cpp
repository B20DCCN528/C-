#include <iostream>
#include <math.h>
#include<algorithm>
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
		sort(c, c+a);
		cout << c[b-1] << "\n";
	}
    return 0;
}

