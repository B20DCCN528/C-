#include <bits/stdc++.h>
using namespace std;

int main() {
	while(1) {
		int n, k, s, d = 0;
		cin >> n >> k >> s;
		if(n < k) {
			cout << 0 << "\n";
			continue;
		}
		if(n == 0 && k == 0 && s == 0) {
			return 0;
		}
		int a[k + 1];
		for(int i = 1; i <= k; i++) {
			a[i] = i;
		}
		while(1) {
			int x = 0;
			for(int i = 1; i <= k; i++) {
				x += a[i];
			}
			if(x == s) {
				d++;
			}
			int ok = 0;
			for(int i = k; i >= 1; i--) {
				if(a[i] != n - k + i) {
					ok = 1;
					a[i]++;
					for(int j = i + 1; j <= k; j++) {
						a[j] = a[j - 1] + 1;
					}
					break;
				}
			}
			if(ok == 0) {
				break;
			}
		}
		cout << d << "\n";
	}
    return 0;
}

