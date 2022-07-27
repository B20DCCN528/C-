#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
struct mh{
	int ma;
	string ten, nhom;
	float mua, ban;
	
};

int main() {
	int n;
	cin >> n;
	mh a[n];
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].ma = i + 1;
	}
	sort(a, a + n, [](mh a, mh b){
		return (a.ban - a.mua) > (b.ban - b.mua);
	});
	for(int i = 0; i < n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << (a[i].ban - a[i].mua) << endl;
	}

    return 0;
}

