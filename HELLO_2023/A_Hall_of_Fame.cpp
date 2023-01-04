#include <bits/stdc++.h>
using namespace std;

// RAGE RAGE RAGE
#define vl vector<ll, ll>
#define pb push_back
#define ll long long
#define mod 1000000007
#define all(a) (a).begin(), (a).end()
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define ll long long
#define scl(n) cin >> n;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pno cout << "NO" << endl
#define pys cout << "YES" << endl
#define dsort(a) sort(a, a + n, greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define vdsort(v) sort(v.begin(), v.end(), greater<int>());
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int pos = 0;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        if (m.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((s[i] == 'R') && s[i + 1] == 'L')
                {
                    cout << "0" << endl;
                    break;
                }
                else if ((s[i] == 'L') && s[i + 1] == 'R')
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }

      
    }
      return 0;
}
