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
		for(int i = 0; i < n; i++){
			if(a[0] == a[1]){
				cout << -1 << "\n";
				break;
			}
			else {
				cout << a[0] << " " << a[1] << "\n";
				break;
			}
		}
		
		
	} 

    return 0;
}

