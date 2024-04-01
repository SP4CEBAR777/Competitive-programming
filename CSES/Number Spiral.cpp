#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t{};
  cin >> t;

  long y{}, x{};
  long ans{};
  while (t--) {
    cin >> y >> x;
    long mx{max(y, x)};
    long n{};
    if (x > y) {
      if (x % 2 == 0) {
        n = (x - 1) * (x - 1) + 1;
        ans = n + (y - 1);
      } else {
        n = mx * mx;
        ans = n - (y - 1);
      }
    } else {
      if (y % 2 == 0) {
        n = mx * mx;
        ans = n - (x - 1);
      } else {
        n = (y - 1) * (y - 1) + 1;
        ans = n + (x - 1);
      }
    }
    cout << ans << '\n';
  }
}
