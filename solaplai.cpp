#include <iostream>
#include <math.h>
using namespace std;
long long gcd(long long a, long long b){
	
	while(b != 0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long a, x, y;
		cin >> a >> x >> y;
		long long r = gcd(x, y);
		for(int i = 0; i < r; i++){
			cout << a;
		}
		cout << "\n";
	}

    return 0;
}

