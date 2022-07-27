#include <iostream>
#include <math.h>
#include <deque>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int c = n % 10;
		int d = 0;
		while(n){
			d = n % 10;
			n /= 10;
		}
		if(c == d){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

    return 0;
}

