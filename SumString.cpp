#include <iostream>
#include <math.h>
using namespace std;
long long gt[22];
void init(){
	gt[0] = 1;
	for(int i = 1; i <= 20; i++){
		gt[i] = i * gt[i-1];
	}
} 
void solve(){
	int n, g, r, b;
	cin >> n >> g >> r >> b;
	long long res = 0;
	for(int R = n; R >= r; R--){
		for(int G = n - R; G >= g; G--){
			int B = n - R - G;
			if(B >= b){
				res += gt[n]/(gt[R] * gt[G] * gt[B]);
			}
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	init();
	while(t--){
		solve();
	}

    return 0;
}

