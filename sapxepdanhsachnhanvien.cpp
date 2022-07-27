#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
struct NhanVien{
	string maNV;
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngaykiHD;
	
};
void nhap(struct NhanVien &ds){
	cin.ignore(); 
	getline(cin,ds.hoten);
	cin >> ds.gioitinh;
	cin >> ds.ngaysinh;
	cin.ignore();
	getline(cin,ds.diachi);
	cin >> ds.masothue;
	cin >> ds.ngaykiHD;
}
void inds(struct NhanVien *ds,int N){
	for(int i = 0; i < N; i++){
		cout << ds[i].maNV << " " << ds[i].hoten << " " << ds[i].gioitinh << " " << ds[i].ngaysinh << " " << ds[i].diachi << " " << ds[i].masothue << " " << ds[i].ngaykiHD;
		cout << endl;
		}
}
bool cmp(NhanVien a, NhanVien b){
	string s = a.ngaysinh, t = b.ngaysinh;
	int n1 = (s[0] - '0')*10 + (s[1] - '0'), t1 = (s[3]-'0')*10 + (s[4] - '0'), na1 = stoi (s.substr(6));
	int n2 = (t[0] - '0')*10 + (t[1] - '0'), t2 = (t[3]-'0')*10 + (t[4] - '0'), na2 = stoi (t.substr(6));
	if(na1 != na2) return na1 < na2;
	if(n1 != n2){
		return n1 < n2;
	}
	return t1 < t2;
}
void sapxep(NhanVien ds[], int &N){
		for(int i = 0; i < N; i++){
		ds[i].maNV = to_string(i+1);
		while(ds[i].maNV.size() < 5){
			ds[i].maNV = "0"+ds[i].maNV;
		}
		if(ds[i].ngaysinh[1] == '/'){
			ds[i].ngaysinh.insert(0,"0"); 
			}
		if(ds[i].ngaysinh[4] == '/'){
			ds[i].ngaysinh.insert(3,"0");
		}
			if(ds[i].ngaykiHD[1] == '/'){
			ds[i].ngaykiHD.insert(0,"0"); 
		}
		if(ds[i].ngaykiHD[4] == '/'){
			ds[i].ngaykiHD.insert(3,"0");
		}
	}
	sort(ds, ds + N, cmp);
}


int main() {
	
		struct NhanVien ds[50];
		int N,i;
		cin >> N;
		for(i = 0; i < N; i++){
			nhap(ds[i]);
		}
		sapxep(ds,N);
		inds(ds,N);
	
    return 0; 
}


