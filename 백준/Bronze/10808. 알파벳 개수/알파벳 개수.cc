#include <bits/stdc++.h>
using namespace std;

int cnt[26]; // 전역변수 자동 0으로 초기화
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	for (auto c : s)
		cnt[c - 'a']++;

	for (int i = 0; i < 26; i++)
		cout << cnt[i] << ' ';
}
