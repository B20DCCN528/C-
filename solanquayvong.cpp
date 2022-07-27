#include <bits/stdc++.h>
using namespace std;
void testcase() {
	int n;
	cin >>n;
	vector<long long> a(n);
	for(auto &i : a){
		cin >> i;
	}
	int ans = 0;
	for(int i = 1; i < n; i++){
		if(a[i] < a[i-1]){
			ans = i;
			break;
		}
	}
	cout << ans;
}
int main() {
	int t = 1;
	cin >> t;
	while(t--){
		testcase();
		cout << "\n";
	}
    return 0;
}

