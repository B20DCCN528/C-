#include <iostream>
#include <math.h>
#include <queue>
#include <map>
#include <limits.h>
using namespace std;
void check(){
	string s;
	cin >> s;
	map<char, int> mp;
	for(char x : s){
		mp[x]++;
	}
	int len = mp.size();
	int cnt = 0, left = 0, res = INT_MAX;
	int dem[256] = {0};
	for(int i = 0; i < s.size(); i++){
		dem[s[i]]++;
		if(dem[s[i]] == 1){
			cnt++;
		}
		if(cnt == len){
			while(dem[s[left]] > 1){
				dem[s[left]]--;
				left++;
			}
			if(i - left + 1 < res){
				res = i - left + 1;
			}
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

