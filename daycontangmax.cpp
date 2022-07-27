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
		int a[n], l[n] = {0};
		l[0] = 1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[j] < a[i]){
					l[i] = max(l[i], l[j]);
				}
			}
			l[i]++;
		}
		sort(l, l+n);
		cout << l[n-1] << endl;
	}

    return 0;
}

