#include <bits/stdc++.h>
using namespace std;
void testcase() {
	int s, d;
	cin >> s >> d;
	if(s > 9 * d){
		cout << -1;
		return;
	}
	int a[d] = {1};
	s--;
	for(int i = d - 1; i >= 0; i--){
		int x = min(s,9 - a[i]);
		a[i] += x;
		s -= x;
	}
	for(int i = 0; i < d; i++){
		cout << a[i];
	}
}
int main() {
	int t = 1;
	cin >> t;
	while(t--){
		testcase();
		cout << "\n";
	}
    return 0;
}

