#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int> v;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		set<int> s(v.begin(), v.end());
		set<int>::iterator it;
		for(int i = 0; i < v.size(); i++){
			it = s.upper_bound(v[i]);
			if(it != s.end()){
				cout << *it << " ";
			}
			else cout << "_" << " ";
		}
		cout << endl;
	}
    return 0;
}

