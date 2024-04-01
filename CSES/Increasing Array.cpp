#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n{};
  cin >> n;
  ll ans{0};
  ll high{0};

  for (int i = 0; i < n; ++i) {
    ll x{};
    cin >> x;
    if (x > high) {
      high = x;
    } else if (x < high) {
      ans += high - x;
    }
  }

  cout << ans << '\n';

  return 0;
}
