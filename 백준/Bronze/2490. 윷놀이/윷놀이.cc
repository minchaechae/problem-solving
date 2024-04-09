#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "DCBAE";
    int sum, result;

    for (int i=0; i<3; i++) {
        sum = 0;
        for (int i=0; i<4; i++) {
            cin >> result;
            sum += result;
        }
        cout << s[sum] << '\n';
    }
}