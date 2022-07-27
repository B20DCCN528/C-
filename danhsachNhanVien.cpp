#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
struct NhanVien{
	string maNV;
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykiHD;
	
};
void nhap(struct NhanVien &ds){
	cin.ignore(); 
	getline(cin,ds.hoten);
	cin >> ds.gioitinh;
	cin >> ds.ngaysinh;
	cin.ignore();
	getline(cin,ds.diachi);
	cin >> ds.masothue;
	cin >> ds.ngaykiHD;
}
void inds(struct NhanVien *ds,int N){
	for(int i = 0; i < N; i++){
		ds[i].maNV = to_string(i+1);
		while(ds[i].maNV.size() < 5){
			ds[i].maNV = "0"+ds[i].maNV;
		}
		if(ds[i].ngaysinh[1] == '/'){
			ds[i].ngaysinh.insert(0,"0"); 
			}
		if(ds[i].ngaysinh[4] == '/'){
			ds[i].ngaysinh.insert(3,"0");
		}
			if(ds[i].ngaykiHD[1] == '/'){
			ds[i].ngaykiHD.insert(0,"0"); 
		}
		if(ds[i].ngaykiHD[4] == '/'){
			ds[i].ngaykiHD.insert(3,"0");
		}
		cout << ds[i].maNV << " " << ds[i].hoten << " " << ds[i].gioitinh << " " << ds[i].ngaysinh << " " << ds[i].diachi << " " << ds[i].masothue << " " << ds[i].ngaykiHD;
		cout << endl;
		}
}


int main() {
	
		struct NhanVien ds[50];
		int N,i;
		cin >> N;
		for(i = 0; i < N; i++){
			nhap(ds[i]);
		}
		inds(ds,N);
	
    return 0; 
}


