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
		sort(a, a+n);
		int count = a[n-1] - a[0];
		if(count == 0){
			cout << 0  <<"\n";
		}
		else {
			int x = 0;
			for(int i = 1; i < n; i++){
				if(a[i] > a[i-1] + 1 ){
				x = x + a[i] - a[i-1] - 1;
				}
			}
		cout << x << "\n";
		}
	
		
	}
    return 0;
}

