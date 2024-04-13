#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A[20];
  int a, b;

  for (int i=1; i<21; i++) A[i-1] = i;

  for (int i=0; i<10; i++) {
    cin >> a >> b;
    reverse(A+a-1, A+b);
  }

  for (int i=0; i<20; i++) cout << A[i] << ' ';
}