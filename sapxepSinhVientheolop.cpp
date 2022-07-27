#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien(){
			ma = ten = lop = email = "";
		}
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien&);
		friend void chuanhoa(SinhVien&);
		string getLop(){
			return this -> lop;
		}
		string getMa(){
			return this -> ma;
		}
};


ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}
istream& operator >> (istream& in, SinhVien& a){
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}
bool cmp(SinhVien a, SinhVien b){
	if(a.getLop() != b.getLop()){
		return a.getLop() < b.getLop();
	}
	return a.getMa() < b.getMa();
}
int main(){
   int n;
   cin >> n;
   SinhVien a[n];
   for(int i = 0; i < n; i++){
   	cin >> a[i];
   }
   sort(a, a + n, cmp);
   for(SinhVien x : a){
   	cout << x;
   }
   
}

