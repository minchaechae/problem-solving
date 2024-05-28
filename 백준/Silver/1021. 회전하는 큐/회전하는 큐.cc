#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  deque<int> d;
  int n, m;
  int ans = 0;
  
  cin >> n >> m;
  for (int i=1; i<=n; i++) d.push_back(i);  

  while (m--) {
    int t;
    cin >> t;
    int idx = find(d.begin(), d.end(), t) - d.begin();
    
    while (true) {
      if (d.front() == t) {
        d.pop_front();
        break;
      }

      if (idx <= d.size()-idx) {
        d.push_back(d.front());
        d.pop_front();
      }
      else {
        d.push_front(d.back());
        d.pop_back();
      } 
      ans++;
    }
  }

  cout << ans;
}