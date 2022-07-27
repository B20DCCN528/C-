#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
struct SinhVien{
	string hoten;
	string lop;
	string ngaysinh;
	string MSV = "N20DCCN001";
	float GPA;
};
void nhapThongTinSV(struct SinhVien &s){
	getline(cin,s.hoten);
	cin >> s.lop;
	cin >> s.ngaysinh;
	cin >> s.GPA;
}
void inThongTinSV(struct SinhVien &s){
	cout << s.MSV << " " << s.hoten << " " << s.lop << " ";
	if(s.ngaysinh[1] == '/'){
		s.ngaysinh.insert(0,"0"); 
	}
	if(s.ngaysinh[4] == '/'){
		s.ngaysinh.insert(3,"0");
	}
	cout << s.ngaysinh << " " << fixed << setprecision(2) << s.GPA;
}

int main() {
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);

    return 0;
}

