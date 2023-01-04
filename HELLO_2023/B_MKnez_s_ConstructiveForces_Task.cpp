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
        int t = n / 2;
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << 2 << " " << -2<<" " ;
            
            }
            cout << endl;
        }
        else if (n == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < t; i++)
            {
                cout << 1 - t << " "<<t<<" " ;
            }
            cout << 1 - t <<" "<< endl;
        }
    }
    return 0;
}
