#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;
  int ans{0};
  string s{};
  cin >> s;
  char el{s[0]};
  for (int i = 1; i < s.length(); ++i) {
    if (el == s[i]) {
      ++ans;
    } else {
      el = s[i];
    }
  }

  cout << ans << '\n';
}
