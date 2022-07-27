#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
string chuanhoa(string bm){
	string res = "";
	stringstream ss(bm);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
	}
	return res;
}
string getname(string name){
	string res, token;
	stringstream ss(name);
	while(ss >> token){
		res = token;
	}
	return res;
}
class GiangVien{
	private:
		string ten, bm, ma;
		static int cnt;
	public:
		void nhap();
		void in();
		string getTen(){
			return this -> ten;
		}
		string getMa(){
			return this -> ma;
		}
};
int GiangVien::cnt = 0;
void GiangVien::nhap(){
	cnt++;
	string s = to_string(cnt);
	if(s.size() < 2){
		s = "0" + s;
	}
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, bm);
}
void GiangVien::in(){
	cout << ma << " " << ten << " " << chuanhoa(bm) << endl;
}
bool timkiem(string name, string word){
	for(char &x : name){
		x = tolower(x);
	}
	for(char &x : word){
		x = tolower(x);
	}
	return name.find(word) != string::npos;
}
int main() {
	int n;
	cin >> n;
	scanf("\n");
	GiangVien a[n];
	
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q;
	cin >> q;
	scanf("\n");
	while(q--){
		string s;
		getline(cin, s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for(GiangVien x : a){
			if(timkiem(x.getTen(), s)){
				x.in();
			}
		}
	}
    return 0;
}

