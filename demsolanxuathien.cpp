#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, m, count = 0;
		cin >> n >> m;
		int c[n];
		for(int i = 0; i < n; i++){
			cin >> c[i];
			if(c[i] == m){
				count++;
			}
		}
		if(count){
			cout << count << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}

    return 0;
}

