#include <bits/stdc++.h>
using namespace std;
int check(char a){
	if(a >= 'a' && a <= 'z'){
		return 1;
	}
	if(a >= 'A' && a <= 'Z'){
		return 1;
	}
	if(a >= '0' && a <= '9'){
		return 1;
	}
	if(a == '.' || a == '_'){
		return 1;
	}
	return 0;
}
void xuat(int a){
	if(a == 0){
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int kt = 1, i, cnt = 0, j = 0;
		string s, tmp, b[100];
		getline(cin, s);
		for(i = 0; i < s.size(); i++){
			if(s[i] == '@'){
				s[i] = ' ';
				cnt++;
			}
			else{
				if(!check(s[i])){
					kt = 0;
				}
			}
		}
		stringstream ss(s);
		while(ss >> tmp){
			b[j++] = tmp; 
		}
		if(j > 2 || cnt > 1 || kt == 0 || cnt == 0){
			xuat(0);
			continue;
		}
		if(b[0].size() > 64 || b[1].size() > 254){
			kt = 0;
		}
		cnt = 0;
		for(i = 0; i < b[1].size(); i++){
			if(b[1][i] == '.'){
				cnt++;
			}
		}
		if(cnt == 0 || b[1][i-1] == '.'){
			kt = 0;
		}
		xuat(kt);
	}

    return 0;
}

