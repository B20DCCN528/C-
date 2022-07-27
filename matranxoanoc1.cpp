#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int c[a][b];
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cin >> c[i][j];
			}
		}
		int h1 = 0, h2 = a - 1, c1 = 0, c2 = b - 1;
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				cout << c[h1][i]<< " ";
			}
			h1++;
			for(int i = h1; i <= h2; i++){
				cout << c[i][c2] << " ";
			}
			c2--;
			if(h1 <= h2){
				for(int i = c2; i >= c1; i--){
					cout << c[h2][i]<<" ";
				}
				h2--;
			}
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					cout << c[i][c1]<<" ";
				}
				c1++;
			}
			
		}
		cout << "\n";
	}

    return 0;
}

