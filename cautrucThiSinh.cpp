#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;
struct ThiSinh{
	string hoten;
	string ngaysinh;
	float diem1;
	float diem2;
	float diem3;
	
};
void nhap(struct ThiSinh &A){
	getline(cin,A.hoten);
	cin >> A.ngaysinh;
	cin >> A.diem1 >> A.diem2 >> A.diem3;
}
void in(struct ThiSinh A){
	float x = A.diem1 + A.diem2 + A.diem3;
	cout << A.hoten << " " << A.ngaysinh << " " << fixed << setprecision(1) << x;
}

int main() {
	struct ThiSinh A;
	nhap(A);
	in(A);
    return 0;
}

