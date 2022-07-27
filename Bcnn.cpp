#include <iostream>
#include<math.h> 

using namespace std;
long long gcd(long long  a, long long  b) {
 while(b != 0) {
 	long long r = a%b;
	 a = b;
	 b = r;
 } 
 return a; 
} 

long long  lcm(long long a, long long b) {
	return a/gcd(a,b)*b; 
} 

int main() {
	int a;
	cin >> a;
	while(a--) {
		int n;
		cin >> n; 
		long long b = 1;
		for(int i = 2; i <= n; i++) {
			b = lcm(b,i); 
		} 
		cout << b << "\n";
	} 

	return 0;
}

