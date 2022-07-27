#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	int a[N], b[N];
	for(int i = 1; i <= N; i++) {
		a[i] = 0;
		b[i] = 0;
	}
	
	while(Q--) {
		int x, y;
		cin >> x >> y;
		for(int i = x; i <= y; i++) {
			b[i]++;
		}
	}
	for(int i = 1; i <= N; i++) {
		if(b[i] % 2 == 0) {
			cout << 0 << " ";
		}
		else { 
			cout << 1 << " "; 
		}
	}
    return 0;
}

