#include <bits/stdc++.h>

using namespace std;
int check(long long n){
	int rev = 0, temp = n;
	while(n != 0){
		rev = rev*10 + n%10;
		n /= 10;
	}
	return rev == temp;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)){
			cout << "YES" <<"\n";
		}
		else {
			cout << "NO" << "\n";
		}
		 
	}

    return 0;
}

