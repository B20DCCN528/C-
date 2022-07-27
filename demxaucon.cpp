#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <algorithm> 
using namespace std;
void check(){
	string s;
	int k;
	cin >> s >> k;
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		int cnt[256] = {0};
		memset(cnt,0,s.size());
		int dem = 0;
		for(int j = i; j < s.size();j++){
			if(cnt[s[j]] == 0){
				dem++;
			}
			if(dem == k){
				res++;
			}
			else if(dem > k){
				break;
			}
			cnt[s[j]]++;
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}
    return 0;
}

