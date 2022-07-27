#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n + 2];
		a[0] = a[1] = 0;
		for(int i = 2; i <= n + 1; i++) {
			cin >> a[i];
			a[i] = max(a[i] + a[i - 2], a[i - 1]);
		}
		cout << max(a[n], a[n + 1]) << "\n";
	}
    return 0;
}

