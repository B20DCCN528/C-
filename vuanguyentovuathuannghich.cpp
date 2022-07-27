#include <iostream>
#include <math.h>
using namespace std;
int check(int n){
	int rev = 0, temp = n;
	while(n != 0){
		rev = rev*10 + n%10;
		n /= 10;
	}
	return rev == temp;
}
int prime[1000001];
void sieve(){
	for(int i = 0; i < 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j += i){
				prime[j] = 0;
			}
		}
	}
} 
int main() {
	int t;
	cin >> t;
	sieve();
	while(t--){
		int a, b;
		cin >> a >> b;
		int cnt = 1;
		for(int i = a; i <= b; i++){
			if(prime[i]){
				if(check(i)){
					cout << i << " ";
					cnt++;
				}
			}
			if(cnt > 10){
				cout << "\n";
				cnt = 1;
			}
		}
		cout << endl;
	}

    return 0;
}

