#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n{};
  cin >> n;

  for (ll k = 1; k <= n; ++k) {
    ll sum = (k * k) * (k * k - 1) / 2;
    ll pos = 4 * (k - 1) * (k - 2);
    cout << sum - pos << '\n';
  }

  return 0;
}
