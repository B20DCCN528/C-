#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int min = INT_MIN, x = 0;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(min < a[j] - a[i] && a[j] > a[i]){
					min = a[j] - a[i];
					x = 1;
				}
			}
		}
		if(x != 1){
			cout << -1 << endl;
		}
		else {
			cout << min << endl;
		}
		
	}

    return 0;
}

