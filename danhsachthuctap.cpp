#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct Sinhvien{
	int stt;
	string ma, ten, lop, email, dn;
	void in(){
		cout << stt << " " << ma << " " << ten << " " << lop << " " << email << " " << dn << endl; 
	}
};

int main() {
	int n;
	cin >> n;
	map<string, vector<Sinhvien>> mp;
	for(int i = 0; i < n; i++){
		Sinhvien x;
		x.stt = i + 1;
		cin >> x.ma;
		cin.ignore();
		getline(cin, x.ten);
		cin >> x.lop >> x.email >> x.dn;
		mp[x.dn].push_back(x);
	}
	int q;
	cin >> q;
	while(q--){
		string dn;
		cin >> dn;
		sort(mp[dn].begin(), mp[dn].end(), [](Sinhvien a, Sinhvien b){
			return a.ten < b.ten;
		});
		for(auto it : mp[dn]){
			it.in();
		}
	}
    return 0;
}

