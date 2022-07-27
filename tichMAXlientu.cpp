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
		long long m = 1, tich = 1;
		for(int i = 0; i < n - 1; i++){
			m = a[i];
			tich = a[i];
			for(int j = i + 1; j < n; j++){
				tich *= a[j];
				m = max(m, tich);
			}
		}
		cout << m << endl;
	}

    return 0;
}

