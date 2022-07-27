#include <iostream>
#include <math.h>
using namespace std;
void check(){
	int n, m, l;
	cin >> n >> m >> l;
	long long a[n], b[m], c[l];
	for(auto &x : a){
		cin >> x;
	}
	for(auto &x : b){
		cin >> x;
	}
	for(auto &x : c){
		cin >> x;
	}
	int i = 0, j = 0, k = 0;
	bool res = 0;
	while(i < n && j < m && k < l){
		 if(a[i] == b[j] && b[j] == c[k]){
		 	cout << a[i] << " ";
		 	i++, j++, k++;
		 	res = 1;
		 } 
		 else if(a[i] < b[j]){
		 	i++;
		 }
		 else if(b[j] < c[k]){
		 	j++;
		 }
		 else{
		 	k++;
		 }
	}
	if(res == 0){
		cout << -1;
	}
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}

    return 0;
}

