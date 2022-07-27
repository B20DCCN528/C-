#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
class NhanVien{
	private:
		string ten, gt, ns, dc, mst, hd;
		int ma;
	public:
		static int cnt;
		friend ostream& operator << (ostream& out , NhanVien a){
			out << setfill('0') << setw(5) << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
			return out;
		}
		friend istream& operator >> (istream& in, NhanVien &a){
			cnt++;
			a.ma = cnt;
			scanf("\n");
			getline(in, a.ten);
			in >> a.gt >> a.ns;
			scanf("\n");
			getline(in, a.dc);
			in >> a.mst >> a.hd;
			return in;
		}
};
int NhanVien::cnt = 0;

int main() {
	NhanVien ds[50];
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

