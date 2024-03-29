#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s{}, t{};
  cin >> s >> t;
  reverse(t.begin(), t.end());

  cout << (t == s ? "YES" : "NO") << '\n';
}
