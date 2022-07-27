#include <bits/stdc++.h>
using namespace std;
char tinh(int n, long long k){
	long long x = pow(2, n - 1);
	if(k == x){
		return 'A' + (n-1);
	}
	if(k < x){
		return tinh(n-1, k);
	}
	return tinh(n-1, k-x);
}
int main() {
	int t, n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << tinh(n, k) << endl;
	}
    return 0;
}

