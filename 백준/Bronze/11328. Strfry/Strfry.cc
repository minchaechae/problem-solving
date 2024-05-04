#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  string a, b;

  cin >> n;

  for (int i=0; i<n; i++) {
    int occur[26] = {};

    cin >> a >> b;
    
    for (auto c : a)
      occur[c-'a']++;
    
    for (auto c : b)
      occur[c-'a']--;

    bool isPossible = true;
    for (int i=0; i<26; i++) {
      if (occur[i] != 0) {
        isPossible = false;
      } 
    }
    
    if (isPossible) cout << "Possible" << '\n';
    else cout << "Impossible" << '\n';
  }
}