#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
struct Sinhvien{	
	string ma, ten, lop;
	int k, q; 
	float diemCC[50], diemKT[50], diemthi[50], diemTB[50], tong;
};
	
struct monhoc{
	int ma;
	string ten;
	int soTc;
};
void nhapMH(monhoc &a){
	cin >> a.ma; 
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.soTc; 
	
}
void nhapSV(Sinhvien &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop;
}
void xuat(Sinhvien a){
	cout << a.ma << " " << a.ten << " " << a.lop << endl;
}
int main() {
	int N, M;
	cin >> N >> M;
	Sinhvien a[M];
	monhoc b[N];
	int sotin1mon[N] = {0};
	for(int i = 0; i < N; i++){
		nhapMH(b[i]);
		sotin1mon[b[i].ma] = b[i].soTc;
	}
	for(int i = 0; i < M; i++){
		nhapSV(a[i]);
		cin >> a[i].k;
		int tong = 0; 
		int sotin = 0;
		for(int j = 0; j < a[i].k; j++){
			cin >> a[i].q;
			cin >> a[i].diemCC[j] >> a[i].diemKT[j] >> a[i].diemthi[j];
			a[i].diemTB[j] = 0.1*a[i].diemCC[j] + 0.2*a[i].diemKT[j] + 0.7*a[i].diemthi[j];
			tong += a[i].diemTB[j]*sotin1mon[a[i].q];
			sotin += sotin1mon[a[i].q];
			
		}
		a[i].tong = 1.0*(tong/sotin);
	}
	for(int i = 0; i < M; i++){
		if(a[i].tong >= 7.0){
			xuat(a[i]);
		}
	}
		
    return 0;
}


