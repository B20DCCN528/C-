#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        while (n--)
        {
            int l = 0, r = s.size() - 1, k = r;
            while (l < r && s[l + 1] <= s[l])
                l++;
            if (l == r)
                break;
            while (l < r)
            {
                if (s[r] > s[k])
                    k = r;
                r--;
            }
            l = 0;
            while (l < k && s[l] >= s[k])
                l++;
            swap(s[l], s[k]);
        }
        cout << s << endl;
    }
}
