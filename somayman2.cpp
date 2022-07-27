#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int tong(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}
int check(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = sum + s[i] - '0';
	}
	return sum;
}
set<int> mm;
void init(){
	mm.insert(9);
	for(int i = 1; i <= 1000; i++){
		if(mm.find(tong(i)) != mm.end()){
			mm.insert(i);
		}
	}
}

int main() {
	int t;
	cin >> t;
	init();
	while(t--){
		string s;
		cin >> s;
		int k = check(s);
		if(mm.find(k) != mm.end()){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}

    return 0;
}

