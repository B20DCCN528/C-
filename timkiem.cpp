#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, x, k, ans = -1;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x == k){
				ans = 1;
			}
			
		}
		cout << ans << "\n";
	}
    return 0;
}

