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
    ll tc;
    cin >> tc;
    while (tc--)
    {

        ll n;
        cin >> n;
        vector<ll> a;
        fr(i, n)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        vasort(a);
        // fr(i,a.size()){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        ll x = a[1] - a[0];

        ll position = 0;
        ll value = a[0];
        for (ll i = 1; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] <= x)
            {
                position = i;
                value = a[i];

                x = a[i + 1] - a[i];
            }
        }

        // cout << x << endl;
        // cout<<value<<endl;
        if (n == 2)
        {
            cout << a[0] << " " << a[1] << endl;
        }
        else
        {
            vector<ll> ans;
            ans.pb(value);
            for (ll i = position + 2; i < n; i++)
            {
                ans.pb(a[i]);
            }
            fr(i, position)
            {
                ans.pb(a[i]);
            }
            ans.pb(a[position+1]);

            fr(i, ans.size())
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
