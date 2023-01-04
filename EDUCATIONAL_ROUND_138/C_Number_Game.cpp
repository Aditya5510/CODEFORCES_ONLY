#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int max = a[n - 1];

    if (n == max && n != 1) {
      cout << 0 << endl;
    } else if (n == 1) {
      cout << 1 << endl;
    } else if (n > max) {
      cout << max << endl;
    } else if (max > n) {
      cout << max << endl;
    }
  }
  return 0;
}
