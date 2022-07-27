#include <iostream>
#include <math.h>
using namespace std;
unsigned long long nt(unsigned long long n){
	if(n < 2) return 0;
	for(unsigned long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
		
	}
	return 1;
}
void solve(){
	unsigned long long t, k = 0;
	cin >> t;
	for(unsigned long long i = 2; i <= sqrt(t); i++){
		if(nt(i)){
			k++;
		}
	}
	cout << k << "\n";
}
int main() {
	int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}

