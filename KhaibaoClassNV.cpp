#include <iostream>
#include <math.h>
#include <string>
#define a() a;
using namespace std;
class NhanVien{
	private:
		string ma, ten , gt, ns, diachi, msthue, hd;
	public:
		NhanVien();
		friend ostream& operator << (ostream&, NhanVien);
		friend istream& operator >> (istream&, NhanVien&);
};
NhanVien::NhanVien(){
	ma = ten = gt = ns = diachi = msthue = hd = "";
}
ostream& operator << (ostream& out, NhanVien a){
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns<< " " << a.diachi << " " << a.msthue << " " << a.hd << endl;
	return out;
}
istream& operator >> (istream& in, NhanVien &a){
	a.ma = "00001";
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.diachi);
	in >> a.msthue >> a.hd;
	return in;
}


int main() {
	NhanVien a();
	cin >> a;
	cout << a;
    return 0;
}

