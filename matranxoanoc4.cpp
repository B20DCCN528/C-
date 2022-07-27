#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
		int a;
		cin >> a;
		int v[a*a];
		int c[a][a], cnt = 0;
		for(int i = 0; i < a*a; i++){
				cin >> v[i];
		}
		sort(v,v+a*a);
		int h1 = 0, h2 = a - 1, c1 = 0, c2 = a - 1;
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				c[h1][i]= v[cnt++];
			}
			h1++;
			for(int i = h1; i <= h2; i++){
				c[i][c2] = v[cnt++];
			}
			c2--;
			if(h1 <= h2){
				for(int i = c2; i >= c1; i--){
					c[h2][i] = v[cnt++];
				}
				h2--;
			}
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					c[i][c1] = v[cnt++];
				}
				c1++;
			}
			
		}
		for(int i = 0; i <a; i++){
			for(int j = 0; j < a; j++){
				cout << c[i][j] << " ";
			}
			cout << "\n";
		}

    return 0;
}

