#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}

struct PhanSo{
	long long tu, mau;
};
typedef struct PhanSo p;
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
	
}

void rutgon(PhanSo &p){
	long long ucln = gcd(p.tu, p.mau);
	p.tu /= ucln;
	p.mau /= ucln;
}
void in(PhanSo p){
	cout << p.tu << '/' << p.mau;
}

int main() {
	PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
    return 0;
}

