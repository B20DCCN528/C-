#include <iostream>
#include <math.h>
using namespace std;
int n, k, s, ans = 0;
int x[100];
int a[21];
void inp(){
	cin >> n >> k >> s;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
void check(int pos, int cnt, int sum){
	if(cnt == k && sum == s){
		ans++;
		return;
	}
	for(int j = pos; j <= n; j++){
		if(a[j] + sum <= s){
			x[cnt] = a[j];
			check(j+1, cnt + 1, sum + a[j]); 
		}
	}
}
int main() {
	while(true){
		inp();
		if(n==0 && k==0 && s==0){
			break;
		}
		ans=0;
		check(1,0,0);
		cout<<ans<<"\n";
	}

    return 0;
}

