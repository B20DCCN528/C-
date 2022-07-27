#include <iostream>
#include <math.h>
#include<algorithm>
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
		int max = c[0];
		for(int i = 0; i < n; i++){
			if(c[i] > max){
				max = c[i];
			}
		}
		cout << max << "\n";
	}

    return 0;
}

