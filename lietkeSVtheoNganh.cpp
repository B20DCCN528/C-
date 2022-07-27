#include <iostream>
#include <math.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator <<  (ostream& out, SinhVien a){
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
		string getma(){
			return this -> ma;
		}
		string getlop(){
			return this -> lop;
		}
};
void viethoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}
int main() {
	map<string,vector<SinhVien>> mp;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		string nganh = tmp.getma().substr(5, 2);
		mp[nganh].push_back(tmp);
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string ng;
		getline(cin, ng);
		viethoa(ng);
		cout << "DANH SACH SINH VIEN NGANH " << ng << ":\n";
		if(ng == "KE TOAN"){
			for(SinhVien x : mp["KT"]){
				cout << x;
			}
		}
		if(ng == "CONG NGHE THONG TIN"){
			for(SinhVien x : mp["CN"]){
				if(x.getlop().find("E") == string::npos){
					cout << x;
				}
			}
		}
			if(ng == "AN TOAN THONG TIN"){
			for(SinhVien x : mp["AT"]){
				if(x.getlop().find("E") == string::npos){
					cout << x;
				}
			}
		}
			if(ng == "VIEN THONG"){
			for(SinhVien x : mp["VT"]){
				cout << x;
			}
		}
			if(ng == "DIEN TU"){
			for(SinhVien x : mp["DT"]){
				cout << x;
			}
		}
	}
    return 0;
}

