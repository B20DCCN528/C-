#include<iostream>
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
	int n;
	cin >> n;
	while(n--) {
		long long a, b;
		cin >> a >> b;
		 cout << lcm(a,b) << " " << gcd(a,b) << "\n";
	} 

	return 0;
}

