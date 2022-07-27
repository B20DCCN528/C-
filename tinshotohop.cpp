#include <iostream>
#include <math.h>
using namespace std;
int c[1000][1000];
void init(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i){
				c[i][j] = 1;
			}
			else {
				c[i][j] = c[i-1][j] + c[i-1][j-1];
				c[i][j] %= (int)1e9+7;
			}
		}
	}
} 

int main() {
	int t;
	cin >> t;
	init();
	while(t--){
		int n, k; 
		cin >> n >> k;
		cout << c[n][k] << endl;
	}

    return 0;
}

