#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int c[n][k], d[n*k], count = 0;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				cin >> c[i][j];
				d[count++] = c[i][j];
			}
		}
		sort(d,d+n*k);
		for(int i = 0; i < count ; i++){
			cout << d[i] << " ";
		}
		cout << endl;
	}

    return 0;
}

