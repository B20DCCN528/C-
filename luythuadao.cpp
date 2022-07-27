#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long poww(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n;
        m = n;
        k = 0;
        while (m != 0)
        {
            k = k * 10 + m % 10;
            m /= 10;
        }
        cout << poww(n, k) << endl;
    }
}
