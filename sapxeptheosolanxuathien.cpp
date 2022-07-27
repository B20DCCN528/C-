#include <bits/stdc++.h>


using namespace std;
int f[100005] = {0};
bool cmp(int x, int y){
	if(f[x] == f[y]){
		return x < y;
	}
	else {
		return f[x] > f[y]; 
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int  n;
		cin >> n;
		int a[n];
		memset(f, 0, sizeof(f));
		for(int i = 0; i < n; i++){
			cin >> a[i];
			f[a[i]]++;
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

    return 0;
}

