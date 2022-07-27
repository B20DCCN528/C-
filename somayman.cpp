#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
int check(long long n){
	if(n%10==6 && (n/10)%10==8)
	{
			return 1;
	}
	else { return 0; }
	
}


int main() {
	int t;
	cin >> t;
	while(t--){
		long long n; 
		cin >> n;
		if(check(n)){
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

    return 0;
}

