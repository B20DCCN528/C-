#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second > b.second){
		return 1;
	}
	if(a.second == b.second && a.first < b.first){
		return 1;
	}
	return 0;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> ts;	
		vector<pair<int, int>> p;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ts[a[i]]++;
		} 
		for(int i = 0; i < n; i++){
			p.push_back(make_pair(a[i], ts[a[i]]));
		} 
		sort(p.begin(), p.end(), cmp);
		for(int i = 0; i < p.size(); i++){
			cout << p[i].first << ' ';
		}
		cout << "\n";
	}
    return 0;
}

