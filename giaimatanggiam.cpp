#include <iostream>
#include <math.h>
#include <string>
#include <stack> 
using namespace std;
void check(){
	string s;
	cin >> s;
	stack<int> st;
	string res = "";
	for(int i = 0; i <= s.size(); i++){
		st.push(i+1);
		if(i == s.size() || s[i] == 'I'){
			while( !st.empty()){
				res += to_string(st.top());
				st.pop();
			}
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		check();
	}

    return 0;
}

