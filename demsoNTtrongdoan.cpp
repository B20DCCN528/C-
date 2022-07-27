#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int prime[100001];
void sieve(){
	for(int i = 0; i < 100000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 0; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j < 100000; j += i){
				prime[j] = 0;
			}
		}
	}
	
}
int main() {
	int t;
	sieve();
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(prime[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
		
	}

    return 0;
}

