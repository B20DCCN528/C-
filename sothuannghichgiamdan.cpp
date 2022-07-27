#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
bool check(string s){
	if(s.size() <2) return false;
	string t = s;
	reverse(all(s));
	return t == s;
}
 
bool cmp(pair<string, int> a, pair<string, int> b){
	return (a.fi.size() != b.fi.size() ? a.fi.size() > b.fi.size() : a > b);
}
 
int main(){
	map<string, int> mp;
	string s;
	while(cin >> s){
		if(check(s)) mp[s]++;
	}
	vector<pair<string, int> > v;
	for(auto it : mp){
		v.pb(it);
	}
	sort(all(v), cmp);
	for(auto it : v){
		cout << it.fi << " " << it.se << endl;
	}
}
