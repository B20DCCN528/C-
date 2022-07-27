#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>

using namespace std;


int main() {
	int t;
	cin >> t;
	char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		char c[15];
		for(int i = 0; i < 15; i++){
			cin >> c[i];
		}
		if(n == 101){
			for(int i = 0; i < 15; i++){
				if(c[i] == a[i]){
					count++;
				}
			}
		}
		else {
			for(int i = 0; i < 15; i++){
				if(c[i] == b[i]){
					count++;
				}
			}
		}
		float d = (float)count*10/15;
		cout << fixed << setprecision(2) << d <<"\n";
	}

    return 0;
}

