#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        deque<int> st;
        while (n--)
        {
            cin >> x;
            if (x == 1)
                cout << st.size() << "\n";
            else if (x == 2)
            {
                if (st.empty())
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
            else if (x == 3)
            {
                cin >> x;
                st.push_back(x);
            }
            else if (x == 4)
            {
                if (st.size())
                    st.pop_front();
            }
            else if (x == 5)
            {
                if (st.size())
                    cout << st.front() << "\n";
                else
                    cout << -1 << "\n";
            }
            else if (x == 6)
            {
                if (st.size())
                    cout << st.back() << "\n";
                else
                    cout << -1 << "\n";
            }
        }
    }
}
