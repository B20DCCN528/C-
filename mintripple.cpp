#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}	
		int m1 = INT_MAX, m2 = INT_MAX, m3 = INT_MAX;
		for(int i = 0; i < n; i++){
			if(a[i] < m1){
				m3 = m2;
				m2 = m1;
				m1 = a[i];
			}
			else if(a[i] < m2){
				m3 = m2;
				m2 = a[i];
			}
			else if(a[i] < m3){
				m3 = a[i];
			}	
		}
		cout << m1 + m2 + m3 << "\n";
	}

    return 0;
}

