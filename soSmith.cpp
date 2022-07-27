#include <iostream>
#include <math.h>
using namespace std;

int tong(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int check(int n){
	int sum1 = tong(n), sum2 = 0;
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum2 += tong(i);
			n /= i;	
		}
	}
	if(tmp == n){
		return 0;
	}
	if(n != 1){
		sum2 += tong(n);
	}
	return sum1 == sum2;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(check(n)){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
    return 0;
}

