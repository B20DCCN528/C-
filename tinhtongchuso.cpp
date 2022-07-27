#include <bits/stdc++.h>

using namespace std;
int sum1(int n){
	int sum = 0;
	while(n > 0){
		sum = sum + n%10;
		n = n/10;
		
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		while(n >= 10){
			n = sum1(n);	
		}
		cout << n << "\n";
	}

    return 0;
}

