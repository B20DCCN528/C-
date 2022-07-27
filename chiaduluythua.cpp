#include <iostream>
#include <math.h>
using namespace std;
long long find(string a, long long b){
	long long res = 0;
	for(int i = 0; i < a.size(); i++){
		res = res*10+a[i]-'0';
		res %= b;
	}
	return res;
}
long long powmod(long long a, long long b, long long c){
	long long res = 1;
	while(b){
		if(b%2==1){
			res *= a;
			res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		string a;
		long long b, c;
		cin >> a >> b >> c;
		long long du = find(a,c);
		cout << powmod(du,b,c) << endl;
	}

    return 0;
}

