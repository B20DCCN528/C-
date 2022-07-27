#include <iostream>
#include <math.h>
using namespace std;
int N, X[100], used[100];
void inKQ(){
	for(int i = 1; i <= N; i++){
		cout << X[i];
	}
	cout << endl;
} 
void Try(int i){
	// duyet cac kha nang am X[i] co the nhan duoc
	for(int j = 1; j <= N; j++){
		//  xet xem lieu rang co the gan X[i] = j hay khong ?
		if(used[j] == 0){
			X[i] = j;
			used[j] = 1; // danh dau
			if(i == N){
				inKQ();
			}
			else {
				Try(i + 1);
			}
			// backtrack
			used[j] = 0;
		}
	}
}

int main() {
	cin >> N;
	Try(1);

    return 0;
}

