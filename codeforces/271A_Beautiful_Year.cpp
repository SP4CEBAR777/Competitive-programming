#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isUnique(int n) {
  string s{to_string(n)};
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length() - 1; ++i) {
    if (s[i] == s[i + 1]) {
      return false;
    }
  }
  return true;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int y{};
  cin >> y;
  int n{y + 1};
  while (!isUnique(n)) {
    ++n;
  }

  cout << n << '\n';
}
