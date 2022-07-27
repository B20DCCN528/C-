#include <bits/stdc++.h>
using namespace std;
int n;
void Try(string s){
	int k = s.size();
	if(n == k){
		if(s[n-1] == '6'){
			cout << s << "\n";
		}
		return;
	}
	if(s[k-1] == '8'){
		Try(s  +"6");
	}
	else {
		if(k < 4){
			Try(s + "6");
		}
		else if(s[k-2] == '8' || s[k-3] == '8'){
			Try(s  + "6");
		}
		Try(s + "8");
	}
}
int main() {
	cin >> n;
	Try("8");
    return 0;
}

