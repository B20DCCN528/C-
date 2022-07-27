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
	map<int, vector<SinhVien>> mp;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[stoi(tmp.getlop().substr(1,2))].push_back(tmp);
	}
	int q;
	cin >> q;
	while(q--){
		int nam; cin >> nam;
		cout << "DANH SACH SINH VIEN KHOA " << nam << ":\n";
		for(SinhVien x : mp[nam%100]){
			cout << x;
		}
	}
    return 0;
}

