#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int dem(string s, char n){
	int r = s.size(), cnt = 1;
	for(int i = 0; i < r -1; i++){
		if(s[i] == s[i+1] && s[i] == n){
			cnt++;
		}
		
	}
	if(s[n-1] == n && s[n-1] != s[n-2]){
		cnt = 1;
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int r = s.size();
		int a[26];
		for(int k = 0; k < 26; k++){
			a[k] = 0;
		}
		for(int j = 0; j < r; j++ ){
			if(a[s[j] - 65] == 0){
				a[s[j] - 65]++;
				cout << s[j] << dem(s,s[j]);	
			}	
		}
		cout << endl;
	}

    return 0;
}

