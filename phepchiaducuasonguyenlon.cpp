#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		long long a, j = 0;
		cin >> s >> a;
		int s1[10001];
		int r = s.size();
		for(int i = 0; i < r; i++){
			s1[i] = s[i] - '0';
		}
		for(int i = 0; i < r; i++){
			j = (j*10 + s1[i])%a;
		}
		cout << j << endl;
	}

    return 0;
}

