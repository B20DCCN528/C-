#include <iostream>
#include <math.h>
#include <string>
#include <iomanip> 
#include <algorithm>
using namespace std;
struct Sinhvien{
	string ma, ten, lop;
	double THCS2, C, TB;
};
void nhap(Sinhvien &e){
	cin >> e.ma;
	cin.ignore();
	getline(cin, e.ten);
	cin >> e.lop;
	cin >> e.THCS2;
	cin >> e.C;
	e.TB = 1.0 * (e.C + e.THCS2) / 2;
}
void xuat(Sinhvien e){
	cout << e.ma << " " << e.ten << " " << e.lop << " " << e.THCS2 << " " << e.C << endl;
}
bool cmp1(Sinhvien a, Sinhvien b){
	return a.ten < b.ten;
}
bool cmp2(Sinhvien a, Sinhvien b){
	return a.TB > b.TB;
}

int main() {
	int n;
	cin >> n;
	Sinhvien ds[n];
	for(int i = 0; i < n; i++){
		nhap(ds[i]);
	}
	for(int i = 0; i < n; i++){
		if(ds[i].C >= 7){
			xuat(ds[i]);
		}
	}
	cout << "\n";
	sort(ds, ds + n, cmp1);
	for(int i = 0; i < n; i++){
		xuat(ds[i]);
	}
	sort(ds, ds + n, cmp2);
	cout << "\n";
	for(int i = 0; i < n; i++){
		xuat(ds[i]);
	}

    return 0;
}

