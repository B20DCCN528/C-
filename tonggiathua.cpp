#include <bits/stdc++.h>

using namespace std;
long long giaithua(int n){
	long long p = 1;
	for(int i = 1; i <= n; i++){
		p *= i;
	}
	return p;
}

int main() {
	int n;
	cin >> n;
	long long s = 0;
	for(int i = 1; i <= n; i++){
		s = s + giaithua(i);
	}
	cout << s << "\n";
    return 0;
}

