#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t(s.rbegin(), s.rend());
    return s + t;
}

void TestCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");

    while (!q.empty() && n > 0) {
        string t = q.front(); q.pop();
        if (t != "") {
            cout << solve(t) << " ";
            n--;
        }
        q.push(t + '6');
        q.push(t + '8');
    }
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
