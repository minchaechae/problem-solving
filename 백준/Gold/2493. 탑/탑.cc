#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  stack<pair<int, int>> s;

  cin >> n;
  for (int i=1; i<=n; i++) {
    int t;
    cin >> t;
      
    if (!s.empty()) {
      while (s.top().first < t) {
        s.pop();
        if (s.empty()) {
          cout << 0 << ' ';
          break;
        }
      }
      if (!s.empty()) cout << s.top().second << ' ';
    }
    // 첫번째
    else cout << 0 << ' ';

    s.push({t, i});
  }
}