#include <bits/stdc++.h>
using namespace std;

int cnt[10];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a,b,c;
  cin >> a >> b >> c;
  string s = to_string(a*b*c);

  for (auto e : s) cnt[e-'0']++;
  for (int i=0; i<10; i++) cout << cnt[i] << '\n';
}