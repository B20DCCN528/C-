#include <bits/stdc++.h>

using namespace std;
int check(int n){
	if( n < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(n);i++){
		if(n%i== 0){
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	cin >> n;
	if(check(n)){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
    return 0;
}

