#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<long long> q;
		q.push(9);
		while(q.size()){
			long long k = q.front();
			q.pop();
			if(k % n == 0){
				cout << k << "\n";
				break;
			}
			q.push(k * 10);
			q.push(k * 10 + 9);
		}
	}
    return 0;
}

