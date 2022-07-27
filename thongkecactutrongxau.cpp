#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <map>
#include <string>
#include<vector>
#include <algorithm>
#include <stdbool.h>
using namespace std;
bool check(char c){
	return c == ' ' || c == '.' || c == '!' || c == ',' || c == '?' || c == '-';
}
bool cmp(pair<string, int> a, pair<string,int> b){
	if(a.second != b.second){
		return a.second > b.second;
		return a.first < b.first;
	}
}

int main() {
	int n;
	cin >> n;
	map<string, int> mp;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		string tmp = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ' ') {
			 continue;
			}
			while(i < s.size() && !check(s[i])){
				tmp += (char)s[i];
				i++;
			}
			mp[tmp]++;
			tmp = "";	
		}
	}
	vector<pair<string,int>> v;
	for(auto it : mp){
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it : v){
		cout << it.first << " " << it.second << endl;
	}

    return 0;
}

