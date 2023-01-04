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
        ll n;
        cin >> n;
        ll a[n+1];
        for (ll i = 1; i < n+1; i++)
        {
          
            cin >> a[i];
        }
        //     for (ll i = 0; i < n; i++)
        //  {

        //      cout << a[i];
        //  }
        //  cout << endl;
        int count = 0;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = a[i]-i; j <= n; j += a[i])
                if (j >= 0)
                {
                    if (a[i] * a[j] == (i + j) &&j>i)
                    {
                        count++;
                        // cout << i  << j  << endl;
                    }
                }
        }
         cout << count << endl;
        //  cout << endl;
    }
    return 0;
}
