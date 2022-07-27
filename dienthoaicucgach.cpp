#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
bool check(string s){
	if(s.size() <2 ) return false;
	string t = s;
	reverse(s.begin(), s.end());
	return t == s;
}
int check1(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != a[n-1-i]){
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s, res = "";
		getline(cin,s);
		int b[1000], k = 0; 
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 65 && s[i] <= 90){
				s[i] = s[i] + 32;
			}
			if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c'){
				b[k++] = 2;
			}
			if(s[i] == 'd'|| s[i] == 'e' || s[i] == 'f'){
				b[k++] = 3;
			}
			if(s[i] == 'g' || s[i] == 'h' || s[i] == 'i'){
				b[k++] = 4;
			}if(s[i] == 'j' || s[i] == 'k' || s[i] == 'l'){
				b[k++] = 5;
			}
			if(s[i] == 'm' || s[i] == 'n' || s[i] == 'o'){
				b[k++] = 6;
			}
			if( s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's'){
				b[k++] = 7;
			}
			if(s[i] == 't'|| s[i] == 'u' || s[i] == 'v'){
				b[k++] = 8;
			}
			if(s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z'){
				b[k++] = 9;
			}
		}
		if(check1(b,k)){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}

    return 0;
}

