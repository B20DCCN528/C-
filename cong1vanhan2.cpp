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
		for(int i = 0; i < n;i++){
			cin >> a[i];
		}
		int mul = 0;
		int res = 0;
		for(int i = 0; i < n; i++){
			int tich = 0;
			while(a[i] > 1){
				if(a[i] % 2 != 0){
					res++;
				}	
				a[i] /= 2;
				tich++;	
			}
			if(a[i] != 0){
				res++;
			}
			mul = max(mul, tich);
		}
		cout << res + mul << endl;
	}

    return 0;
}

