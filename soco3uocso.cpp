#include <iostream>
#include <math.h> 

using namespace std;
int prime[100001];
void sieve(){
	for(int i = 0; i <= 100000; i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i = 2; i <= sqrt(100000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 100000; j += i ){
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
		int n;
		cin >> n;
		for(int i = 2; i <= sqrt(n); i++){
			if(prime[i]) {
				cout << i*i << " ";
			}
		}
		cout <<"\n";
		
	}

    return 0;
}

