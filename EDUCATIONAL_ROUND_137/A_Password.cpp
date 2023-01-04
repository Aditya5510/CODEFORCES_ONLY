#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
int t;
cin >> t;
while(t--){
  int n;
  cin >> n;
  int a[n];
for (int i = 0; i < n; i++)
{
  cin >> a[i];
}
int z = (10 - n - 1);
int x =( (z * (z + 1)) / 2)*6;
cout << x << endl;
}

return 0;
}
