#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;

int main() {
	int t, x, i, n;
	cin >> t;
	while(t--){
		priority_queue<long long, vector<long long>, greater<long long> > q;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> x;
			q.push(x);
		}
		long long kq = 0;
		while(q.size() >= 2){
			long long min1 = q.top(); q.pop();
			long long min2 = q.top(); q.pop();
			long long sum = (min1 + min2)%M;
			kq = (kq + sum) % M;
			q.push(sum);
		}
		cout << kq << endl;
	}
    return 0;
}

