#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s, c[100], token;
		int cnt = 0;
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		while(ss >> token){
			c[cnt++] = token;
		}
		for(int i = 0; i < cnt; i++){
			if(c[i][0] <= 'z' && c[i][0] >= 'a'){
				c[i][0] = c[i][0] - 32;
			}
			for(int j = 1; j < c[i].size(); j++){
				if(c[i][j]>='A' && c[i][j] <= 'Z'){
					c[i][j] = c[i][j] + 32;
				}
			}
		}
		if(k == 1){
			cout << c[cnt-1] << " ";
			for(int i = 0; i < cnt - 1; i++){
				cout << c[i] << " ";
			}
		}
		else {
			for(int i = 1; i < cnt; i++){
				cout << c[i] << " ";
			}
			cout << c[0];
		}
		cout << endl;
	}

    return 0;
}

