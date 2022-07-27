#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	set<string> s1, s2;
	ifstream f1, f2;
	f1.open("DATA1.in");
	while(f1 >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		s1.insert(s);
	}
	f1.close();
	f2.open("DATA2.in");
	while(f2 >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		s2.insert(s);
	}
	f2.close();
	
	map<string, int> mp;
	for(auto x : s1){
		mp[x]++;
	}
	for(auto x : s2){
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first << " ";
	}
	cout << endl;
	for(auto x : mp){
		if(x.second > 1){
			cout << x.first << " ";
		}
	}

    return 0;
}

