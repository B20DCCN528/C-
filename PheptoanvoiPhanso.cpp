#include <iostream>
#include <math.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b){
	long long r;
	while(b){
		r = a  % b;
		a = b;
		b = r;
	}
	return a;
}
long long lcm(long long a, long long b){
	return a / gcd(a, b) * b;
}
struct PhanSo{
	long long tu, mau;
	void rutgon(){
		int g = gcd(abs(tu), abs(mau));
		tu = tu / g;
		mau = mau / g;
	}
};
void process(PhanSo A, PhanSo B){
	A.rutgon();
	B.rutgon();
	long long mc = lcm(A.mau, B.mau);
	PhanSo C;
	C.tu = (int)pow(mc/A.mau*A.tu + mc/B.mau*B.tu, 2);
	C.mau = mc*mc;
	C.rutgon();
	PhanSo D;
	D.tu = A.tu*B.tu*C.tu;
	D.mau = A.mau*B.mau*C.mau;
	D.rutgon();
	cout << C.tu << '/' << C.mau << " " << D.tu << '/' << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A,B);
	}

    return 0;
}

