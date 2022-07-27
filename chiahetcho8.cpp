#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int check(string s,int k){
	int d = 0;
	for(int i = 0; i < s.size(); i++){
		int n = 0;
		for(int j = i; j < s.size(); j++){
			n = n * 10 + (s[j] - '0');
			n %= k;
			if(n == 0){
				d++;
			}
		}
	}
	return d;
}
void test(){
	string s;
	cin >> s;
	cout << check(s, 8) - check(s, 24) << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
		test();
	}

    return 0;
}

