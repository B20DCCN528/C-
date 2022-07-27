#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream a;
	a.open("VANBAN.in");
	set<string> se;
	string s;
	while(a >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		se.insert(s);
	}
	a.close();
	for(auto s : se){
		cout << s << endl;
	}

    return 0;
}

