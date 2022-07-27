#include <iostream>
#include <math.h>

using namespace std;
void check(long long a[],long long c[], int n){
	for( int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==a[j]){
				c[i]=a[j];
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], c[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			c[i] = -1; 
		}
		check(a,c,n);
		for(int i = 0; i < n; i++){
			cout << c[i] << " "; 
		}
		cout << endl;
	}

    return 0;
}

