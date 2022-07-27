#include <iostream>
#include <math.h>
#include <algorithm>
#include <string> 
#include <map>
#include <vector>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.ma;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
		string getlop(){
			return lop;
		}
};

int main() {
	map<string, vector<SinhVien>> mp;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[tmp.getlop()].push_back(tmp);
	}
	int q;
	cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(SinhVien x : mp[s]){
			cout << x;
		}
	}
    return 0;
}

