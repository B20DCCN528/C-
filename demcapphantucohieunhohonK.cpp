#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long cnt = 0;
		for(int i = 0; i < n - 1; i++){
			int up = upper_bound(a+i+1, a + n, a[i] + k - 1) - (a + i + 1);
			cnt += up;
		}
		cout << cnt << "\n";
	}

    return 0;
}

