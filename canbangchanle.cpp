#include <iostream>
#include <math.h>
using namespace std;
int check(int n){
	int chan = 0, le = 0;
	while(n!=0){
		if(n%2 == 0){
			chan++;
		}
		else {
			le++;
		}
		n = n / 10;
	}
	if(chan == le){
		return 1;
	}
	else {
		return 0;
	}
	
}

int main() {
	int n;
	cin >> n;
	int x = pow(10,n-1), y = pow(10,n);
	int count = 0;
	for(int i = x; i < y; i++){
		if(check(i)){
			cout << i << " ";
			count++;
			if(count > 0 && (count%10) == 0){
			cout <<"\n";
			}
		}
		
	}

    return 0;
}

