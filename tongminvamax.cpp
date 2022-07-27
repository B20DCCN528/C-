#include <iostream>
#include <math.h>
#include <string>
#include<algorithm>
#include <stdlib.h>
using namespace std;
void max_val(string a, string b){
	for(auto &x : a){
		if(x == '5') {
			x = '6';
		}
	}
	for(auto &x : b){
		if(x == '5'){
			x = '6';
		}
	}
	cout << stoll(a) + stoll(b) << endl;
}
void min_val(string a, string b){
	for(auto &x : a){
		if(x == '6'){
			x = '5';
		}
	}
	for(auto &x : b){
		if(x == '6'){
			x = '5';
		}
	}
	cout << stoll(a) + stoll(b) << " ";
}
void process(){
	string a, b;
	cin >> a >> b;
	min_val(a,b);
	max_val(a,b);
}

int main() {
	int t;
	cin >> t;
	while(t--){
		process();
	}
	
    return 0;
}

