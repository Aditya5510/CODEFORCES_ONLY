#include <bits/stdc++.h>
#include<algorithm>
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
        ll b[n + 1];

        for (ll i = 1; i < n+1; i++)
        {
            cin >> a[i];
        }
        // fr1(i,n){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        set<ll> k;
        set<ll>::iterator ptr;
        map<ll, ll> m;
        for (ll i = 1; i <= n; i++)
        {
            b[i] = a[i] - i;
            k.insert(b[i]);
            m[b[i]]++;
        }
        ll sum = 0;
        for (ptr= k.begin(); ptr!=k.end(); ptr++)
        {
            ll x = *ptr;
            // cout << x<< " ";
            if(m[x]>1){
                sum += m[x] * (m[x]-1) / 2;
            }
        }
      
        // cout << endl;
        cout << sum << endl;
    }
    return 0;
}
