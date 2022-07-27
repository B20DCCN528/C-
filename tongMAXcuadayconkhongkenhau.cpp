#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
void check(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a){
		cin >> x;
	}
	if( n == 1){
		cout << a[0];
	}
	else if(n == 2){
		cout << max(a[0], a[1]);
	}
	else {
		long long b = a[0], c = a[1], d = a[0]  + a[2];
		for(int i = 3; i < n; i++){
			long long e = a[i];
			if(b > c){
				e += b;
			}
			else {
				e += c;
			}	
			b = c;
			c = d;
			d = e;
		
		}
		if(c > d){
			cout << c;
		}
		else {
			cout << d;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
		cout << "\n";
	}

    return 0;
}

