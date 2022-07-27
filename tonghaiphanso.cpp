#include <iostream>
#include <math.h>
using namespace std;

struct PhanSo{
	long long tu, mau;
};
long long gcd(long long a, long long b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}
long long lcm(long long a, long long b){
	return a/gcd(a,b)*b;
}
void nhap(struct PhanSo &p){
	cin >> p.tu >> p.mau;
}
void rutgon(struct PhanSo &p){
	long long ucln = gcd(p.tu, p.mau);
	p.tu /= ucln;
	p.mau /= ucln;
}
PhanSo tong(struct PhanSo p, struct PhanSo q){
	rutgon(p);
	rutgon(q);
	long long mc = lcm(p.mau, q.mau);
	p.tu = mc/p.mau*p.tu;
	q.tu = mc/q.mau*q.tu;
	p.mau = q.mau = mc;
	struct PhanSo sum;
	sum.tu = p.tu + q.tu;
	sum.mau = mc;
	rutgon(sum);
	return sum;
	
}
void in(struct PhanSo p){
	cout << p.tu << '/' << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	struct PhanSo t = tong(p,q);
	in(t);

    return 0;
}

