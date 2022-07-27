#include <iostream>
#include <math.h>
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
		int x = 1;
		for(int i = 0; i < n; i++){
			for(int j = i - 1; j >= 0; j--){
				if(a[i] == a[j] ){
					x = 0;
					break;
				}
			}
			if(x == 0){
				cout << a[i] << "\n";
				break;
			}
		}
		if(x == 1){
			cout << -1 << "\n"; 
		}
	}

    return 0;
}

