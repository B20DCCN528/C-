#include <iostream>
#include <math.h>
#include <queue> 
#include <vector>
#include <set>
#include <map>
using namespace std;

vector<string> res;
int solve(int s, int t){
	queue<pair<int, int> > q;
	set<int> se;
	se.insert(s);
	q.push(make_pair(s,0));
	while( !q.empty()){
		pair<int,int> top = q.front();
		q.pop();
		if(top.first == t){
			return top.second;
		}
		if(top.first * 2 == t || top.first - 1 == t){
			return top.second + 1;
		}
		if(se.find(top.first*2) == se.end() && top.first < t){
			q.push(make_pair(top.first * 2, top.second + 1));
			se.insert(top.first*2);
		}
			if(se.find(top.first-1) == se.end() && top.first > 1){
			q.push(make_pair(top.first - 1, top.second + 1));
			se.insert(top.first - 1);
		}
		
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int s,n;
		cin >> s >> n;
		cout << solve(s,n) << endl;
	}

    return 0;
}
