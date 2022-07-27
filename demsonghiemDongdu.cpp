#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long cnt = 0;
		for(long long x = 1; x <= b; x++){
			if(x*x % b == 1){
				long long res = x + b*(a/b);
				if(res > a){
					res -= b;	
				}
				cnt += (res-x)/b + 1;
			}
		}
		cout << cnt << "\n";
	} 

    return 0;
}

