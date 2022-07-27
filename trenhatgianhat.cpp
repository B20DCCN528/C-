#include <bits/stdc++.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

struct person{
	string ten, ns;
};
bool cmp(person a, person b){
	string s = a.ns, t = b.ns;
	int n1 = (s[0] - '0')*10 + (s[1] - '0'), t1 = (s[3]-'0')*10 + (s[4] - '0'), na1 = stoi (s.substr(6));
	int n2 = (t[0] - '0')*10 + (t[1] - '0'), t2 = (t[3]-'0')*10 + (t[4] - '0'), na2 = stoi (t.substr(6));
	if(na1 != na2) return na1 < na2;
	if(t1 != t2){
		return t1 < t2;
	}
	return n1 < n2;
}

int main() {
	int n;
	cin >> n;
	person a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].ten >> a[i].ns;
	}
	sort(a, a + n, cmp);
	cout << a[n-1].ten << "\n" << a[0].ten << endl;

    return 0;
}

