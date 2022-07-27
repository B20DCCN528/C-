#include <bits/stdc++.h>
#define ll long long

using namespace std;
int solve(int n,ll k){
	int x = n/k;
	int r = n % k;
	ll tong1 = (k-1)*k/2;
	ll tong2 = r*(r+1)/2;
	return tong1*x + tong2;

}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		if(solve(n,k)==k){
			cout << 1;
		}
		else cout << 0;
		cout << "\n";
	}

    return 0;
}

