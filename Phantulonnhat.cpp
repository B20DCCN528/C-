#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(int &i : a) {
			cin >> i;
		}
		sort(a.rbegin(), a.rend());
		a.resize(k);
		for(int i : a) {
			cout << i << " ";
		}
		cout << "\n";	
	}
	 return 0;
}

