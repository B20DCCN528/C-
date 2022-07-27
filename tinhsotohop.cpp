#include <iostream>
#include <math.h>
#include <algorithm>
const int Mod = (int)1e9+7;
using namespace std;

long long powmod(long long a, long long b, long long m){
	long long res = 1;
	a %= m;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	} 
	return res;
}
long long inverse(long long a, long long m){
	return powmod(a, m-2,m);
}
long long f[1000001];
int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k; 
		cin >> n >> k;
		f[0] = 1;
		for(int i = 1; i <= n; i++){
			f[i] = i * f[i-1];
			f[i] %= Mod;
		}
		cout << f[n] % Mod * inverse(f[k] * f[n-k] % Mod,Mod) % Mod << endl;
	}

    return 0;
}

