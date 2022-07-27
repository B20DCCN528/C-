#include <iostream>
#include <math.h>
using namespace std;

int main() {

		int n;
		cin >> n;
		int a[n][3];
		int x = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 3; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			int cnt = 0;
			for(int j = 0; j < 3; j++){
				if(a[i][j] == 1){
					cnt++;
				}
			}
			if(cnt >= 2){
				x++;
			}
		}
		cout << x << "\n";
    return 0;
}

