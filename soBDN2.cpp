#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n;
		queue<long long> q;
		q.push(1);
		while(q.size()){
			k = q.front();
			if(k % n == 0){
				cout << k << "\n";
				break;
			}
			q.pop();
			q.push(k * 10);
			q.push(k * 10 + 1);
		}
	}
    return 0;
}

