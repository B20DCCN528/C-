#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int cnt = 0;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0){
				cnt++;
			}
		}
		cout << cnt <<"\n";
	}

    return 0;
}

