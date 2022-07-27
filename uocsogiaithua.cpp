#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int cnt = 0, n, p, temp, i;
		cin >> n >> p;
		i = 1;
		while(p*i <= n){
			temp = p*i;
			while(temp % p == 0){
				temp /= p;
				cnt++;
			}
			i++;
		}
		cout << cnt << endl;
	}
    return 0;
}

