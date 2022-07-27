#include <iostream>
#include <math.h>
using namespace std;

long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b, a%b);
}
long long lcm(long long a, long long b){
	return a/gcd(a,b)*b;
}
long long solve(int n, int x, int y, int z){
	long long tmp = lcm(lcm(x,y),z);
	long long m = (long long)pow(10,n-1);
	long long res = (m + tmp - 1)/tmp*tmp;
	if(res < (long long)pow(10,n)) return res;
	else return -1;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		cout << solve(n,x,y,z) <<"\n";
	}

    return 0;
}

