#include <iostream>
#include <math.h>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	set<int> s;
	for(int i = 0; i < n; i++){
		s.insert(a[i]);
	}
	for(int x : s){
		cout << x << " ";
	} 

    return 0;
}

