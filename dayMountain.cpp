#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l, r;
		cin >> l >> r;
		int i = l;
		while(a[i] < a[i+1] && i < r){
			i++;
		}
		while(a[i] > a[i+1] && i < r){
			i++;
		}
		if(i == r){
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

    return 0;
}

