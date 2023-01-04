#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, m;
    int x, y;
    cin >> n >> m;
    int ar[m][2];
    for (int i = 0; i < m; i++)
    {
      cin >> ar[i][0] >> ar[i][1];
    }
    if(n>m){
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }

  return 0;
}
