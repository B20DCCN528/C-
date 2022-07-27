#include <bits/stdc++.h>

using namespace std;
struct toado{
	double x, y;
	void input(){
		cin >> x >> y;
	}
};
double area(toado a, toado b){
	return (a.x * b.y - b.x * a.y);
}
void check(){
	int n;
	cin >> n;
	toado a[n+1];
	for(int i = 0; i < n; i++){
		a[i].input();
	}
	a[n] = a[0];
	double res = 0;
	for(int i = 0; i < n; i++){
		res += area(a[i], a[i+1]);
	}
	res = 0.5 * abs(res);
	cout << fixed << setprecision(3) << res << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}

    return 0;
}

