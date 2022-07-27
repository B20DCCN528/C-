#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;
struct SinhVien{
	string msv;
	string ten,lop, ns;
	float gpa;
	void in(){
		cout << msv << " " << ten << " " << lop << " "<< ns << " " << fixed << setprecision(2) << gpa << endl;
		
	}
};
string chuan(string name){
	vector<string> v;
	stringstream ss(name);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	string res = "";
	for(int i = 0; i < v.size(); i++){
		res += (toupper(v[i][0]));
		for(int j = 1; j < v[i].size(); j++){
			res += (tolower(v[i][j]));
		}
		if(i != v.size() - 1){
			res.append(" ");
		}
	}
	return res;
}
void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		getline(cin,a[i].ten);
		a[i].ten = chuan(a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].gpa;
		if(a[i].ns[1] == '/'){
			a[i].ns = "0"+a[i].ns;
		}
		if(a[i].ns[4] == '/'){
			a[i].ns.insert(3,"0");
		}
		string ma = to_string(i+1);
		while(ma.size()<3){
			ma = "0" + ma;
		}
		a[i].msv = "B20DCCN" + ma;
	}
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n, [](SinhVien a, SinhVien b){
		return a.gpa > b.gpa;
	});
}
void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		a[i].in();
	}
}

int main() {
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds,N);
	sapxep(ds,N);
	in(ds,N);
	return 0;

    return 0;
}

