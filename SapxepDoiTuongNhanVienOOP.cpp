#include <iostream>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <algorithm>
using namespace std;
class NhanVien{
	private:
		string ten, gt ,ns, dc, mst, hd;
		int ma;
	public:
		static int cnt;
		friend ostream& operator << (ostream &out, NhanVien a){
			out << setfill('0') << setw(5) << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
			return out;
		}
		friend istream& operator >> (istream &in, NhanVien &a){
			cnt++;
			a.ma= cnt;
			in.ignore();
			getline(in, a.ten);
			in >> a.gt >> a.ns;
			in.ignore();
			getline(in, a.dc);
			in >> a.mst >> a.hd;
			return in;
		}
		friend bool operator < (NhanVien a, NhanVien b){
			string s1 = a.ns, s2 = b.ns;
			int ng1 = (s1[0] -'0')*10 + s1[1] - '0', t1 = (s1[3] - '0')*10 + s1[4] - '0', n1 = stoi(s1.substr(6));
			int ng2 = (s2[0] -'0')*10 + s2[1] - '0', t2 = (s2[3] - '0')*10 + s2[4] - '0', n2 = stoi(s2.substr(6));
			if(n1 != n2){
				return n1 < n2;
			}
			if(ng1 != ng2){
				return ng1 < ng2;
			}
			return t1 < t2;
		}
};
int NhanVien::cnt = 0;
void sapxep(NhanVien a[], int n){
	sort(a, a + n);
}

int main() {
	NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> ds[i];
	}
	sapxep(ds, N);
	for(i = 0; i < N; i++){
		cout << ds[i];
	}
    return 0;
}

