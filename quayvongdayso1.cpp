#include <bits/stdc++.h>

using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = k; i < n; i++){
			cout << a[i] << " ";
		}
		for(int i = 0; i < k ; i++){
			cout << a[i] << " ";
		}
		cout <<"\n";
		
	}
	
    return 0;
}

