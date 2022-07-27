#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
#define a() a
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend void nhap(SinhVien&);
		friend void in(SinhVien);
};
 
void nhap(SinhVien &a){
	a.ma = "B20DCCN001";
	string ten;
	getline(cin, ten);
	string ns, lop;
	double gpa;
	cin >> lop >> ns >> gpa;
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3, "0");
	a.lop = lop; a.ns= ns; a.gpa = gpa;
}
 
void in(SinhVien a){
	cout << a.ma << " " << "Nguyen Van A" << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
}
 
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}

