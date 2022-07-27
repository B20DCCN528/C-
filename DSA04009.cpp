#include <bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
struct Matran{
	long long f[2][2];
};
Matran operator* (Matran A, Matran B){
	Matran C;
	int i, j, k;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			C.f[i][j] = 0;
			for(int k = 0; k < 2; k++){
				C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%M)%M;
			}
		}
		
	}
	return C;
}
Matran powMod(Matran A, int n){
	if(n == 1){
		return A;
	}
	Matran X = powMod(A, n/2);
	if(n%2 == 0){
		return X*X;
	}
	return A*X*X;
}
int main() {
	int t, i, j, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Matran A;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> A.f[i][j];
			}
		}
		Matran KQ = powMod(A, n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				
			}
		}
		cout << KQ.f[1][0] << endl;
	}
    return 0;
}

