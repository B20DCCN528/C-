#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int count = 0, x = -1;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				count++;
				if(count == k){
					x = i;
					break;
				}
				n = n / i;
			}
			if(x > 0){ break; }
		}
		if( n > 1){
			count++;
			if(count == k){
				x = n;
			}
		}
		cout << x << "\n";	
	}

    return 0;
}

