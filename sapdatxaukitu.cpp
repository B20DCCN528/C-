#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
void solve(){
	string s;
	cin >>s;
	int a[26] = {0};
	for(char x : s){
		a[x-'a']++;
	}
	int max_val = *max_element(a, a +26);
	if(s.size() - max_val >= max_val - 1) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}

