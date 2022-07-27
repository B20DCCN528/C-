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
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int l = 0, r = n - 1;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				l = i + 1;
				break;
			}
		}
		for(int j = n - 1; j >= 0; j--){
			if(a[j] != b[j]){
				r = j + 1;
				break;
			}
		}
		cout << l << " " << r << endl;
	}
    return 0;
}

