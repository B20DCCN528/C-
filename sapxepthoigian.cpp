#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int,pair<int,int>>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second.first >> v[i].second.second;
	}
	sort(v.begin(), v.end(), [](const pair<int,pair<int,int> > &a, const pair<int,pair<int,int> > &b){
		if(a.first != b.first){
			return a.first < b.first;
		}
		if(a.second.first != b.second.first){
			return a.second.first < b.second.first;
		}
		return a.second.second < b.second.second;
	});
	for(auto it : v){
		cout << it.first << " " << it.second.first << " " << it.second.second << endl;
	}

    return 0;
}

