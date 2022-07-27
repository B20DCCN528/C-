#include <iostream>
#include <math.h>
using namespace std;
int prime[10001];
void sang(){
	for(int i = 1; i <= 10000; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(10000); i++){
		if(prime[i] == i){
			for(int j = i*i; j <= 10000; j += i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
}

int main() {
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++ ){
			cout << prime[i] << " ";
		}
		cout << "\n";
	}

    return 0;
}

