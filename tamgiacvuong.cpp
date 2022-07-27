#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int check(long long a[], int n){
	for(int i = n - 1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] == a[i]){
				return 1;
			}
			else if(a[l] + a[r] < a[i]){
				l++;
			}
			else {
				r--;
			}
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			a[i] = 1ll*x * x;
		}
		sort(a,a+ n);
		if(check(a, n)){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	
	}

    return 0;
}

