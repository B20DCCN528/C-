#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int c[n];
		for(int i =0; i < n; i++){
			cin >> c[i];
		}
		int count = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i+1; j < n ; j++){
				if(c[i] + c[j] == k){
					count++;
				}
			}
		}
		cout << count <<"\n";
	}
    return 0;
}

