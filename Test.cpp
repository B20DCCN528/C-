#include <iostream>
#include <math.h>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
int toInt(char c){
	return c - '0';
}
char toChar(int c){
	return (char) i + 48;
}

int main() {
	string a;
	cin >> a;
	int tong = 0;
	for(int i = 0; i < a.size(); i++){
		tong += toInt(a[i]);
	}
	if(tong % 3 == 0){
		cout << "CHIA HET CHO 3";
	}
	else {
		"KHONG CHIA HET CHO 3";
	}
    return 0;
}
