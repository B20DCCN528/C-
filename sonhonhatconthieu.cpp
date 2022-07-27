#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n - 1; i++){
			cin >> a[i];
		}
		int kt  = 1;
		for(int i = 0; i < n; i++){
			if(a[i] == kt){
				kt++;
			}
		}
		cout << kt << "\n";
		
	}

    return 0;
}

