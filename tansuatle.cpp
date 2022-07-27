#include <iostream>
#include <math.h>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			mp[a[i]] = mp[a[i]] % 2;
			if(mp[a[i]] == 1){
				cout << a[i] << endl;
				break;
			}
		}
	}

    return 0;
}

