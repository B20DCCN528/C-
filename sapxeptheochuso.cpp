#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdbool.h>
using namespace std;
bool cmp(int a, int b){
	int n = 10, m = 10;
	while(a/n > 0){
		n *= 10;
	}
	while(b/m > 0){
		m *= 10;
	}
	return a*m + b > b*n + a;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		for(int i = 0; i < n; i++){
			cout << a[i];
		}
		cout << "\n";
	}

    return 0;
}

