#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
struct SinhVien{
	string msv;
	string ten,lop, ns;
	float gpa;
	void in(){
		cout << msv << " " << ten << " " << lop << " "<< ns << " " << fixed << setprecision(2) << gpa << endl;
		
	}
};
void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin,a[i].ten);
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
	in(ds,N);
	return 0;

    return 0;
}

