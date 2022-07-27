#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
class DoanhNghiep{
	private:
		string ma, ten;
		int sl;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl;
		}
		void in(){
			cout << ma << " " << ten << " " << sl << endl;
		}
		string getma(){
			return this -> ma;
		}
		int getsl(){
			return this -> sl;
		}
};
bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getsl() != b.getsl()){
		return a.getsl() > b.getsl();
	}
	return a.getma() < b.getma();
}
int main() {
	int n;
	cin >> n;
	DoanhNghiep a[n];
	for(int i = 0; i < n; i++){
		 a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
    return 0;
}

