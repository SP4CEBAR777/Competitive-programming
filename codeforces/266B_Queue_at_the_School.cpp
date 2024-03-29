#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{}, t{};
  string s{};
  cin >> n >> t >> s;

  for (int i = 0; i < t; ++i) {
    for (int k = 0; k < n - 1; ++k) {
      if (s[k] == 'B' && s[k + 1] == 'G') {
        swap(s[k], s[k + 1]);
        ++k;
      }
    }
  }

  cout << s << '\n';
}
