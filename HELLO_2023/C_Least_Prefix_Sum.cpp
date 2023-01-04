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

int solve_half(const vector<ll> &vec)
{
    ll cur = 0;
    int ans = 0;

    set<pair<ll, int>> opts;
    int cnt = 0;
    for (ll a : vec)
    {
        if (a < 0)
        {
            opts.insert(make_pair(a, cnt));
            cnt++;
        }

        cur += a;
        if (cur < 0)
        {
            auto it = opts.begin();
            cur -= 2 * it->first;
            opts.erase(it);
            ans++;
        }
    }

    return ans;
}

void solve()
{
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> suff(arr.begin() + m, arr.end());
        int ans = solve_half(suff);

        vector<ll> pref(arr.begin() + 1, arr.begin() + m);
        reverse(pref.begin(), pref.end());
        for (int i = 0; i < (int)pref.size(); i++)
        {
            pref[i] *= -1;
        }
        ans += solve_half(pref);

        cout << ans << endl;
    }
    return 0;
}
