#include <iostream>
#include <math.h>
#include <string>
using namespace std;
struct Employee {
	int code;
	string name;
	int year;
	string role;
};
void nhap(Employee &e){
	cin >> e.code;
	cin.ignore();
	getline(cin, e.name);
	getline(cin, e.role);
	cin >> e.year;
}
void xuat(Employee e){
	cout << e.code << " " << e.name << " " << e.role << " " << e.year;
}

int main() {
	Employee e1;
	nhap(e1);
	xuat(e1);

    return 0;
}

