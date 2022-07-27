#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
	
void kiemtra(){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			
			if(a[i]==0 || a[i] == 1){
				cout << a[i] << " ";
			}
			else {
				long long fn = 1, f1 = 1, f0 = 0;
				while(fn < a[i]){
					fn = f1 + f0;
					f0 = f1;
					f1 =fn;
				}
				if(fn == a[i]){
					cout << a[i] << " ";
				}
			}
		}
		cout << "\n";
		
}

int main() {
	int t;
	cin >> t;
	while(t--){
		kiemtra();
	} 

    return 0;
}

