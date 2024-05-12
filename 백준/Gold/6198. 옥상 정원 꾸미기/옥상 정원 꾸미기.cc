#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  stack<int> s;
  long long ans = 0;

  cin >> n;

  for (int i=0; i<n; i++) {
    int h;
    cin >> h;

    while (!s.empty() && s.top() <= h) s.pop();
    ans += s.size();
    s.push(h);
  }

  cout << ans;
}