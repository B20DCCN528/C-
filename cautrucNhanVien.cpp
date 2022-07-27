#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
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
void nhap(struct NhanVien &s){
	getline(cin,s.hoten);
	getline(cin, s.gioitinh);
	getline(cin,s.ngaysinh);
	getline(cin,s.diachi);
	getline(cin,s.masothue);
	getline(cin,s.ngaykiHD);
}
void in(NhanVien &s){
		if(s.ngaysinh[1] == '/'){
		s.ngaysinh.insert(0,"0"); 
	}
	if(s.ngaysinh[4] == '/'){
		s.ngaysinh.insert(3,"0");
	}
		if(s.ngaykiHD[1] == '/'){
		s.ngaykiHD.insert(0,"0"); 
	}
	if(s.ngaykiHD[4] == '/'){
		s.ngaykiHD.insert(3,"0");
	}
	cout << s.maNV << " " << s.hoten << " " << s.gioitinh << " " << s.ngaysinh << " " << s.diachi << " " << s.masothue << " " << s.ngaykiHD;
	
}

int main() {
	struct NhanVien a;
	nhap(a);
	in(a);
    return 0;
}

