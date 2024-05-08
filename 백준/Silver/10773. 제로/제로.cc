#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int k, ans=0;
  stack<int> s;

  cin >> k;
  while (k--) {
    int n;
    cin >> n;
    if (n == 0) s.pop();
    else s.push(n);
  }

  while (!s.empty()) {
    ans += s.top();
    s.pop();
  }

  cout << ans;
}