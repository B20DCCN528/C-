#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	const long long r = 1e9 + 7;
	while(t--){
		int n, x;
		cin >> n >> x;
		long long a[2000];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long o = 0;
		for(int i = 0; i < n; i++)
		{
			long long s = 1;
			for(int j = n - i -1; j > 0; j--) {
				s = (s*x)%r;
			}
			o += a[i]*s;
			if(o > r){
				o %= r;
			}
		}
		cout << o << endl;
	}

    return 0;
}

