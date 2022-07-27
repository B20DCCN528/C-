#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k, x, pos;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x == k){
				pos = i;
			}
		}
		cout << pos + 1 << "\n";
	}
    return 0;
}

