#include <iostream>
#include <math.h>
using namespace std;
void solve(){
	string s; int k;
	cin >> s >> k;
	int ans = 0;
	
	for(int i = 0; i < s.size(); i++){
		int dem = 0;int cnt[256] = {0};
		for(int j  = i; j < s.size(); j++){
			if(cnt[s[j]] == 0){
				dem++;
			}
			if(dem == k){
				ans++;
			}
			if(dem > k) break;
			cnt[s[j]] = 1;
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}

