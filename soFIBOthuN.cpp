#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
void slove(int n){
	long long fibo[n];
	fibo[0] = 1;
	fibo[1] = 1;
	for(int i = 2; i < n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	cout << fibo[n-1];
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		slove(n);
		cout << "\n";
	}

    return 0;
}

