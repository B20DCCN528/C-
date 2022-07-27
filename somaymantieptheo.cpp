#include <bits/stdc++.h>
using namespace std;

long long tmp;

void check(int k) {
    k--;
    if(!k) {
        tmp = tmp * 10 + 4;
        return;
    }
    if(k == 1) {
        tmp = tmp * 10 + 7;
        return;
    }
    check(k >> 1);
    if(k & 1) {
        tmp = tmp * 10 + 7;
    }
    else {
        tmp = tmp * 10 + 4;
    }
}
int main() {
    vector<long long> v;
    for(int i = 1; i <= 1023; i++) {
        tmp = 0;
        check(i);
        v.push_back(tmp);
    }
    long long a, b;
    cin >> a >> b;
    if(a == b) {
        return cout << v[lower_bound(v.begin(), v.end(), a) - v.begin()], 0;
    }
    long long sum = 0;
    long long idx = lower_bound(v.begin(), v.end(), a) - v.begin();
    while(a <= b) {
        if(v[idx] >= b) {
            sum += (b - a + 1) * v[idx];
            break;
        }
        else sum += (v[idx] - a + 1) * v[idx];
        a = v[idx] + 1;
        idx = lower_bound(v.begin(), v.end(), a) - v.begin();
    }
    cout << sum;
    return 0;
}
