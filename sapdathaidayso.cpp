#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void check(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	map<int, int> mp;
	for(auto &x : a){
		cin >> x;
	}
	for(auto &x : b){
		cin >> x;
		mp[x] = 1;
	}
	vector<int> res;
	for(int x : a){
		if(mp[x] >= 1){
			mp[x]++;
		}
		else{
			res.push_back(x);
		}
	}
	for(int x : b){
		if(mp[x] > 0){
			for(int j = 1; j < mp[x]; j++){
				cout << x << " ";
			}
			mp[x] = 0;
		}
		
	}
	sort(res.begin(), res.end());
	for(int x : res){
		cout << x << " ";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
		cout << "\n";
	}

    return 0;
}

