#include <iostream>
#include <math.h>
using namespace std;
int check(int a[], int b[], int m, int n){
	int sum = 0;
	int t = 0;
	for(int i = 0; i < m; i++){
		t += a[i];
		int k = 0;
		for(int j = i + 1; j < n; j++){
			k += b[j];
		}
		if(k + t > sum){
			sum = k + t;
		}
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m  >> n;
		int a[m], b[n];
		for(int i = 0; i < m; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		int x = check(a,b,m,n);
		int y = check(b,a,n,m);
		if(x < y){
			x = y;
		}
		cout << x << endl;
	}

    return 0;
}

