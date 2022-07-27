#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		int l = 0, res = 1e9;
		long long sum = 0;
		for(int r = 0; r < n; r++){
			sum += a[r];
			while(sum > x){
				res = min(res, r - l + 1);
				sum -= a[l];
				l++;
			}
		}
		if(res == 1e9){
			cout << -1 << endl;
		}
		else{
			cout << res << endl;
		}
	} 

    return 0;
}

