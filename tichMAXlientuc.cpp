#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long m = 1, res = 0;
		for(int i = 0; i < n; i++){
			m = 1;
			for(int j = i; j < n; j++){
				if(a[i] ==0){
					break;
				}
				m *= a[j];
				res = max(m, res);
			}
		}
		cout << res << endl;
	}

    return 0;
}

