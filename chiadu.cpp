#include <bits/stdc++.h>

using namespace std;
int kiemtra(int a, int b){
	for(int i = 1;i <= b - 1; i++){
		if((i*a)%b==1) return i;
	}
	return 0;
} 

int main() {
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(kiemtra(a,b)== 0){ cout << -1 << "\n"; }
		
		else cout << kiemtra(a, b) << "\n";
		
	}

    return 0;
}

