#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k;
  int s[2][7] = {};

  cin >> n >> k;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    s[a][b]++;
  }

  int room = 0;
  for (int i=0; i<2; i++) {
    for (int j=1; j<7; j++) {
      room += s[i][j]/k;
      if (s[i][j]%k) room++;
    }
  }

  cout << room;
}