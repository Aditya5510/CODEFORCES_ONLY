#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, sum = 0;
    cin >> n;
    string s;
    cin >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]<a[i+1]&&a[i+2]<a[i]&&s[i]==0 && s[i+1]==1 && s[i+2]==1){
          sum = sum + (a[i] + a[i + 1]);
        }
        if (a[i]>=a[i+1]&&s[i]<s[i+1])
        {
          sum = sum + a[i];
          s[i + 1] = s[i + 1] - 1;
        }
        else if(a[i]>a[i+1]&&s[i]==s[i+1]==1){
          sum = sum + a[i];
        }
        else if(a[i]>=a[i+1]&&s[i]>s[i+1]){
          sum = sum + a[i];
        }
        else if(a[i]<a[i+1]&&s[i]==s[i+1]==1){
          sum = sum + a[i];
        }
        

        
    }
    

    cout << sum << endl;
  }

  return 0;
}
