#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		long long  ans = 0, k = 1, n = a.size(), s;
		for(int i = a.size() - 1; i >= 0; i--) {
			s = (long long)(a[i] - '0') * k;
			s  *= n;
			ans += s;
			k = k * 10 + 1;
			n--;
		}
		cout << ans << "\n";
	}
    return 0;
}

