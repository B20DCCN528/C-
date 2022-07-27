#include <bits/stdc++.h>
using namespace std;
struct data {
	long long x[10][10];
};
int n;
long long mod = 1000000007;
struct data operator*(struct data a, struct data b){
	struct data xx;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			xx.x[i][j] = 0;
			for(int k = 0; k < n; k++) {
				xx.x[i][j] = (xx.x[i][j] + (a.x[i][k] * b.x[k][j] ) % mod ) % mod;
			}
		}
	}
	return xx;
}
struct data pow(struct data a, long long k) {
	if(k == 1) {
		return a;
	}
	if(k % 2 == 1) {
		return a * pow(a, k - 1);
	}
	struct data xx = pow(a, k / 2);
	return xx * xx;
}
int main() {
	int t;
	cin >> t;
	while(t--)  {
		long long k;
		cin >> n >> k;
		struct data a;
		for(int i = 0;i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a.x[i][j];
			}
		}
		a = pow(a, k);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << a.x[i][j] << " ";
			}
			cout << "\n";
		}
	}
    return 0;
}

