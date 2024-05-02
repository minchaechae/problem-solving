#include <bits/stdc++.h>
using namespace std;

bool a[2000001];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x, t, cnt=0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> t;
    a[t] = true;
  }

  cin >> x;
  for (int i=1; i<(x+1)/2; i++) {
    if (a[i] && a[x-i]) cnt++;
  }

  cout << cnt;
}