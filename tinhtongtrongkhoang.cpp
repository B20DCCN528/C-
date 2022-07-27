#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, Q;
		cin >> n >> Q;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= Q; i++){
			int x, y;
			cin >> x >> y;
			int sum = 0;
			for(int i = x -1; i < y; i++){
				sum =  sum + a[i];
			}
			cout << sum << "\n";
			
		}
		
	} 

    return 0;
}

