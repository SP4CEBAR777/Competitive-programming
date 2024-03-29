#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  string s{};
  cin >> n >> s;
  int a{}, d{};
  string ans{};

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A') {
      ++a;
    } else {
      ++d;
    }
  }

  if (a > d) {
    ans = "Anton";
  } else if (a < d) {
    ans = "Danik";
  } else {
    ans = "Friendship";
  }

  cout << ans << '\n';
}
