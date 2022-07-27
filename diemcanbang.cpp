#include <iostream>
#include <math.h>
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
		int res = -1;
		for(int i = 1; i < n; i++){
			a[i] += a[i-1];
		}
		for(int i = 1; i < n - 1; i++){
			if(a[i-1] == a[n-1] - a[i]){
				res = i + 1;
				break;
			}
		}
		cout << res << endl;
	}

    return 0;
}

