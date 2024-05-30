#include <bits/stdc++.h>
using namespace std;

void parse(const string& in, deque<string>& d) {
  string s = in.substr(1, in.size()-2);

  stringstream ss(s);
  string item;

  while (getline(ss, item, ',')) {
    d.push_back(item);
  }
}

void printAnswer(deque<string>& d) {
  cout << '[';
  for (int i=0; i<d.size(); i++) {
    cout << d[i];
    if (i+1 != d.size()) cout << ',';
  }
  cout << "]\n";
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t, n;
  string p, x;
  
  cin >> t;
  while (t--) {
    cin >> p >> n >> x;

    deque<string> d;
    bool error = false;
    bool reversed = false;

    parse(x,d);
    for (char c : p) {
      if (c == 'R') {
        reversed = !reversed;
      }
      else if (c == 'D') {
        if (d.empty()) {
          error = true;
          break;
        }
        if (reversed) d.pop_back();
        else d.pop_front();
      }
    }

    if (error) cout << "error" << '\n';
    else {
      if (reversed) reverse(d.begin(), d.end());
      printAnswer(d);
    }
  }
}