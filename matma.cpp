#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string tmp, tp[2];
		stringstream ss(s);
		int n = 0;
		while(ss >> tmp){
			tp[n++] += tmp;
		}
		string kq;
		for(auto x : tp[1]){
			if(x == 'A' || x == 'K'){
				kq += '0';
			}
			if(x == 'B' || x == 'L'){
				kq += '1';
			}
			if(x == 'C' || x == 'M'){
				kq += '2';
			}
			if(x == 'D' || x == 'N'){
				kq += '3';
			}
			if(x == 'E' || x == 'O'){
				kq += '4';
			}
			if(x == 'F' || x == 'P'){
				kq += '5';
			}
			if(x == 'G' || x == 'Q'){
				kq += '6';
			}
			if(x == 'H' || x == 'R'){
				kq += '7';
			}
			if(x == 'I' || x == 'S'){
				kq += '8';
			}
			if(x == 'J' || x == 'T'){
				kq += '9';
			}
			
		}
		if(tp[0] == kq){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
    return 0;
}

