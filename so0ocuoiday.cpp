#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
void check(long long a[], long long b[], int n){
	int x = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != 0){
			b[x++] = a[i];
		}
	}

}

int main() {
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], b[n]={0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		check(a, b, n);
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << "\n";
	}

    return 0;
}

