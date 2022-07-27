#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, sum = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
    cout << ans;
}

int main() {
        testCase();
    return 0;
}
