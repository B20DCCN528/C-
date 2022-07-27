#include <iostream>
#include <math.h>
#include <algorithm>
#include <string> 
#include <iomanip>
using namespace std;
struct Sinhvien{
	string masv;
	string hoten;
	string lop;
	float x, y, z;
};

int main() {
	int n;
	cin >> n;
	Sinhvien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].masv;
		cin.ignore();
		getline(cin,a[i].hoten);
		cin >> a[i].lop;
		cin >> a[i].x >> a[i].y >> a[i].z;
	}
	auto cmp = [](const Sinhvien &a, const Sinhvien &b){
		return a.masv < b.masv;
	};
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << a[i].masv << " " << a[i].hoten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].x << " " << a[i].y << " " << a[i].z << endl;
	}

    return 0;
}

