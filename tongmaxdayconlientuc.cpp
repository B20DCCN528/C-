#include <iostream>
#include <math.h>
#include <limits.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long best = INT_MIN;
		long long sum = 0;
		for(int i = 0; i < n; i++){
			sum = max(a[i],sum + a[i]);
			best = max(best,sum);
		}
		cout <<  best << endl; 
	}
	 

    return 0;
}

