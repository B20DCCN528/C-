#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a1, a2, a3, c1, c2, c3, b1, b2, b3, d1, d2, d3;
		cin >> a1 >> a2 >> a3;
		cin >> b1 >> b2  >> b3;
		cin >> c1 >> c2 >> c3;
		cin >> d1 >> d2 >> d3;
		int xAB = b1 - a1, yAB = b2 - a2, zAB = b3 - a3;
		int xAC = c1 - a1, yAC = c2 - a2, zAC = c3 - a3;
		int xAD = d1 - a1, yAD = d2 - a2, zAD = d3 - a3;
		int x = yAB*zAC - zAB*yAC, y = zAB*xAC - xAB*zAC, z = xAB*yAC - xAC*yAB;
		int d = x*xAD + y*yAD + z*zAD;
		if(d == 0){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

    return 0;
}

