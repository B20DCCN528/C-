#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

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
		int res = 0;
		for(int i =0; i < n - 1; i++){
			for(int j = n - 1; j > i; j--){
				if(a[i] <= a[j]){
					res = max(res, j - i);
					break;
				}
			}
		}
		cout << res << endl;
	}
    return 0;
}

