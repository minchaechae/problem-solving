#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int n, k;
stack<pair<int, int>> s;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  for (int i=1; i<=n; i++) {
    cin >> k;

    while (!s.empty() && s.top().second < k) {
      s.pop();
    }

    if (s.empty()) cout << 0 << ' ';
    else cout << s.top().first << ' ';

    s.push({i, k});
  }
}