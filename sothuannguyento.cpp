#include <iostream>
#include <math.h>
using namespace std;

int songuyento(int n){
	if(n <= 1){
		return 0;
	}
	if(n <= 3){
		return 1;
	}
	if(n % 2 == 0 || n % 3 == 0){
		return 0;
	}
	for(int i = 5; i <= sqrt(n); i += 6){
		if(n % i == 0 || n % ( i + 2) == 0){
			return 0;
		}
	}
	return 1;
}
int tongchuso(long n){
	int s = 0;
	while(n != 0){
		s += n % 10;
		n /= 10;
	}
	if(songuyento(s)){
		return 1;
	}
	else {
		return 0;
	}
}
int tungso(long n){
	int b;
	while(n != 0){
		b = n % 10;
		if(songuyento(b) == 0){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		long a, b;
		cin >> a >> b;
		int cnt = 0;
		for(long i = a; i <= b; i++){
			if(tungso(i) && tongchuso(i) && songuyento(i)){
				cnt++;
			}
		}
		cout << cnt << endl;
	}

    return 0;
}

