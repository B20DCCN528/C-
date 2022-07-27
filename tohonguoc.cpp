#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<vector<int>> res;
void Try(int i){
	for(int j = a[i-1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			res.push_back(a);
		}
		else {
			Try(i+1);
		}
	}
}

int main() {
	int T = 1;
	cin >> T;
	while(T--){
		cin >> n >> k;
		res.clear();
		a.resize(k + 1, 0);
		Try(1);
		sort(res.rbegin(), res.rend());
		for(auto i : res){
			for(int j = 1; j < i.size(); j++){
				cout << i[j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
    return 0;
}
