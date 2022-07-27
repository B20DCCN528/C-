#include <bits/stdc++.h>
using namespace std;
int n, s;
int a[105];
string ans;
void Try(int pos, int k){
	if(ans == "YES"){
		return;
	}
	if(2*k == s){
		ans = "YES";
		return;
	}
	if(pos < n){
		if(2 * (k + a[pos]) <= s){
			Try(pos + 1, k + a[pos]);
		}
		Try(pos + 1, k);
	}
}
int main() {
	int t;
	cin >> t;
	while(t--){
		s = 0;
		ans = "NO";
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s % 2 == 0){
			Try(0,0);
		}
		cout << ans << "\n";
	}
    return 0;
}

