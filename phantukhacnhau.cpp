#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n - 1; i++){
			cin >> b[i];
		}
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				cout << i + 1 << "\n";
				break;
			}
		}
	}
    return 0;
}

