#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];

int main() {
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	for(int i = 1; i <= 1000000; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(100000); i++){
		if(prime[i] == i){
			for(int j = i*i; j <= 1000000; j += i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
	for(int i = 1; i <= n; i++){
		cout << prime[i] << " ";
	}
	cout << "\n";
	}

    return 0;
}

