#include <iostream>
#include <math.h>
using namespace std;
void kiemtra(unsigned long long n){
	unsigned long long i;
	 while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
   
    for ( i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    if (n > 1) {
    	 cout << n << " ";
	}
       
}

int main() {
	int a;
	cin >> a;
	while(a--) {
		unsigned long long m;
		cin >> m;
		kiemtra(m);
		cout << "\n";
	} 
    return 0;
}

