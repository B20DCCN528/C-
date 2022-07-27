#include <iostream>
#include <math.h>
#include <algorithm> 
using namespace std;
int n, x;
bool cmp(int a, int b){
	return abs(x-a) < abs(x-b);
}
void check(){
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}
    return 0;
}

