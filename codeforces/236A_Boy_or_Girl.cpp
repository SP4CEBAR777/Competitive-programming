#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s{};
  cin >> s;
  sort(s.begin(), s.end());
  int ans{1};
  char el{s[0]};
  for (int i = 1; i < s.length(); ++i) {
    if (s[i] != el) {
      ++ans;
      el = s[i];
    }
  }

  cout << (ans % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
}
