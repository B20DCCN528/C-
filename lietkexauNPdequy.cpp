#include <iostream>
#include <math.h>
using namespace std;
int N, X[100];
void inKQ(){
	for(int i = 1; i <= N; i++){
		cout << X[i];
	}
	cout << endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == N){
			inKQ();
		}
		else {
			Try(i+1);
		}
	}
} 

int main() {
	cin >> N;
	Try(1);
    return 0;
}

