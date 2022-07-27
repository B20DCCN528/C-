#include <iostream>
#include <math.h>
using namespace std;
int check(int n){
	int i,ans = 1;
	if(n % 2 != 0){
		return 0;
	}
	for( i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0){
				ans++;
			}
			if(n/i % 2 == 0){
				ans++;
			}
		}
		
	}
	i--;
	if(i * i == n){
		ans--;
	}
	return ans;

}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << check(n) << "\n";
	}
    return 0;
}

