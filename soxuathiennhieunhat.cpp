#include <iostream>
#include <math.h>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, x, s = 0;
		cin >> n;
		pair<int, int> k;
		map<int, int> m;
		for(int i = 0; i < n; i++){
			cin >> x;
			m[x]++;
		}
		for(auto i : m){
			if(i.second > s){
				s = i.second;
				k = i;
			}
		} 
		if(k.second > (float)n / 2){
			cout << k.first << "\n";
		} 
		else {
			cout << "NO" << "\n";
		}
	}
    return 0;
}

