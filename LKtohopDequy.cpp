#include <iostream>
#include <math.h>
using namespace std;
int N, X[100], K;
void inKQ(){
	for(int i = 1; i <= K; i++){
		cout << X[i]; 
	}
	cout << endl; 
} 
//i: N - K + i;
//i: X[i-1] + 1;
//i = 1 : x[0] + 1 = 0 + 1 = 1;
void Try(int i){
	// duyet các kha nang ma X[i] co the nhan duoc
	for(int j = X[i-1]; j <= N - K + 1; j++){
		X[i] = j;
		if(i == K){
			inKQ(); 
		}
		else {
			Try(i+1); 
		} 
	} 
} 

int main() {
	cin >> N >> K;
	X[0] = 0;
	Try(1); 
    return 0;
}

