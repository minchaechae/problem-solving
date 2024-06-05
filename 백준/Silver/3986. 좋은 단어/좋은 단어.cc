#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, ans = 0;
  string a;

  cin >> n;
  while (n--) {
    cin >> a;
    stack<char> s;
    for (char e : a) {
      if (!s.empty() && s.top() == e) s.pop();
      else s.push(e);
    }

    if (s.empty()) ans++;
  }

  cout << ans;
}