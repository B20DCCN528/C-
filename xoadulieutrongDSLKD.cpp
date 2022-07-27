#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	for(int i = 0; i < n; i++) {
		if(a[i] != k) {
			cout << a[i] << " ";
		}
	}
    return 0;
}

