#include <iostream>
#include <math.h>
#include<string>
#include<sstream>

using namespace std;

int main() {
	string  a,token,c[10000];
	getline(cin,a);
	int n = 0;
	stringstream b(a);
	while(b>>token){
		c[n++] = token;
	}
	for(int i = 0; i < n - 1 ; i++){
		if(c[i][0] <= 'z' && c[i][0] >= 'a'){
			c[i][0] = c[i][0] - 32;
		}
		for(int j =1; j < c[i].size(); j++){
			if(c[i][j]>='A' && c[i][j] <= 'Z'){
				c[i][j] = c[i][j] + 32;
			}
		}
	}
	for(int i = 0; i < n-1; i++){
		cout << c[i];
		if(i < n - 2){
			cout << " ";
		}
	}
	cout << ", ";
	for(int i = 0; i < c[n-1].size(); i++){
		if(c[n-1][i] <= 'z' && c[n-1][i] >= 'a'){
			c[n-1][i] = c[n-1][i] - 32;
		}	
		cout << c[n-1][i];
	}



    return 0;
}

