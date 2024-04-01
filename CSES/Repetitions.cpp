#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s{};
  cin >> s;
  int ans{0};
  int cnt{0};
  char curr{s[0]};

  for (auto c : s) {
    if (c == curr) {
      ++cnt;
    } else {
      curr = c;
      cnt = 1;
    }
    ans = max(ans, cnt);
  }

  cout << ans << '\n';

  return 0;
}
