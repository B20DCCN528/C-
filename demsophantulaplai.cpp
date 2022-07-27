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
		int cnt = 1, sum = 0;
		for(int i = 1; i < n ; i++){
			if(a[i] == a[i-1]) {
				cnt++;
			} 
			else {
				if(cnt >= 2){
					sum = sum + cnt;
					cnt = 1;	
				}
				
			}
		}
		if(cnt >= 2){
			sum = sum + cnt;
			
		}
		cout << sum <<"\n";
	
	}

    return 0;
}

