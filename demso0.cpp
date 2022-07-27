#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int m = lower_bound(a, a + n, 1) - a;
		cout << m << "\n";
	}
    return 0;
}

