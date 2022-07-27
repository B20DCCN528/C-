#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class Team{
	private;
		string mt, ten, truong;
	public:
	
};
class thisinh : public Team{
	public:
		string mats, hoten, mat;
	void in(){
		cout << mats <<  " " << hoten << 
	}
};
void nhapteam(Team a[], int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		getline(cin, a[i].ten);
		getline(cin, a[i].truong);
		string ma = to_string(i+1);
		while(ma.size() < 2){
			ma = "0" + ma;
		}
		a[i].mt = "Team" + ma;
	}
}
void nhapts(thisinh b[], int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		getline(cin, b[i].hoten);
		getline(cin, b[i].mat);
		string ma = to_string(i+1);
		while(ma.size() < 3){
			ma = "0" + ma;
		}
		b[i].mat = "C" + ma;
	}
}
void sapxep(thisinh b[], int n){
	sort(a, a + n, [](thisinh a, thisinh b){
		return a.hoten < b.hoten;
	})
}
void in(thisinh b[], int n){
	for(int i = 0; i < n; i++){
		b[i].in();
	}
}

int main() {
	

    return 0;
}

