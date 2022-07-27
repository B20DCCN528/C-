#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a , int b){
	return a > b;
}
int main() {
		int i1 = 0, i2 = 0;
		int n;
		cin >> n;
		int a[n];
		vector<int> chan, le;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(i % 2 == 0){
				chan.push_back(a[i]);
			}
			else {
				le.push_back(a[i]);
			}
		}
		sort(chan.begin(),chan.end());
		sort(le.begin(), le.end(),cmp);
		int i = 0, j = 0;
		for(int k = 0; k < n; k++){
			if(k % 2 == 0){
				cout << chan[i1++] << " ";
			}
			else {
				cout << le[i2++]  << " ";
			}
		}

    return 0;
}

