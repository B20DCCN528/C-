#include <bits/stdc++.h>

using namespace std;
int powmod1(int x, int y, int m){
	long long res = 1;
	for(int i = 1; i <= y; i++){
		res *= x;
		res %= m;
	}
	return res;
	}


int main() {
	int t;
	cin >> t;
	while(t--){
		int x, y, m;
		cin >> x >> y >> m;
		cout << powmod1(x, y, m) << "\n";
	}
    return 0;
}

