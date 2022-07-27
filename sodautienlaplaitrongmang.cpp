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
		int ok = 0, i = 0;
		for(i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] == a[i]){
					ok = 1;
					break;
				}
				
			}
			if(ok == 1){
				break;
			}
		}
		if(ok == 1){
			cout << a[i] << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}

    return 0;
}

