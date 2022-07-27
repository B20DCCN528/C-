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
		int c[n];
		for(int i = 0; i < n; i++){
			cin >> c[i];
		}
		sort(c, c+n);
		int min = abs(c[1] - c[0]);
		for(int i = 2; i < n; i++){
			if(min > abs(c[i] - c[i-1])){
				min = abs(c[i] - c[i-1]);
			}
			
		}
		cout << min <<"\n";
		
	}
    return 0;
}

