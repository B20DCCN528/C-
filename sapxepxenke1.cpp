#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a + n);
		for(int i = 1; i < n; i += 2) {
			b[i] = a[(i - 1) / 2];
		}
		for(int i = 0; i < n; i += 2) {
			b[i] = a[n - i/2 - 1];
		}
		for(int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << "\n";
	} 
    return 0;
}

