#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
int check(int n){
	while(n!=0){
		int r = n % 10;
		if(r != 6 && r!= 8 && r != 0 ){
			return 0;
		
		}	n /= 10;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(check(n)){
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" <<"\n";
		}
	}

    return 0;
}

