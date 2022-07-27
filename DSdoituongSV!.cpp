#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int cnt = 0;
class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend ostream& operator << (ostream &out,const SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			cnt++;
			string tmp = to_string(cnt);
			tmp = string(3-tmp.size(), '0') + tmp;
			a.ma = "B20DCCN" + tmp;
			cin.ignore();
			getline(in,a.ten);
			in >> a.lop >> a.ns >> a.gpa;
			if(a.ns[2] != '/'){
				a.ns = "0" + a.ns;
			} 
			if(a.ns[5] != '/'){
				a.ns.insert(3, "0");
			}
			return in;
		}
};
int main() {
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> ds[i];
	}
	for(i = 0; i < N; i++){
		cout << ds[i];
	}

    return 0;
}

