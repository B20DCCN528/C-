#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		long long c[n], d[m];
		for(int i = 0; i  < n; i++){
			cin >> c[i];
		}
		for(int i = 0; i < m; i++){
			cin >> d[i];
		}
		sort(c, c+n);
		sort(d, d+m);
		cout << c[n-1]*d[0] <<"\n";
	}

    return 0;
}

