#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5];

    for (int i=0; i<5; i++) {
        cin >> arr[i];
    }

    int avg = accumulate(begin(arr), end(arr), 0) / 5;

    sort(arr, arr+5);
    int med = arr[2];
    
    cout << avg << '\n' << med;
}