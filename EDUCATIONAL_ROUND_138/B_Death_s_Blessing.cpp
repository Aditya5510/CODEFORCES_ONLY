#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, s1 = 0, s2 = 0;
    cin >> n;
    ll monsters[n];
    ll power[n];
    for (ll i = 0; i < n; i++) {
      cin >> monsters[i];
      s1 += monsters[i];
    }
    for (ll i = 0; i < n; i++) {
      cin >> power[i];
      s2 += power[i];
    }
    sort(power, power + n);
    ll max = power[n - 1];
    ll answer = s1 + s2 - max;
    cout <<answer << endl;
  }
  return 0;
}
