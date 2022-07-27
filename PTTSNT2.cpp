#include <bits/stdc++.h>

using namespace std;
void kiemtra(int n){
	int count = 0;
	while(n%2==0){
		count++;
		n = n/2;
	}
	if(count>0){
		cout << 2 << " " << count << "\n";
	}
	for(int i = 3; i <= sqrt(n); i+=2){
		count = 0;
		while(n%i==0){
			count++;
			n = n/i;
		}
		if(count>0){
			cout << i << " " << count << "\n";
		}
	}
	if(n > 1){
		cout << n << " " << 1;
	}
}

int main() {
	int n;
	cin >> n;
	kiemtra(n);
	

    return 0;
}

