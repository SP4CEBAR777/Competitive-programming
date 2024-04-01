#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n{};
  cin >> n;
  ll ans{n * (n + 1) / 2};
  ll k{};

  for (int i = 0; i < n - 1; ++i) {
    cin >> k;
    ans -= k;
  }

  cout << ans << '\n';

  return 0;
}
