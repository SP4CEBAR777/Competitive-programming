#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  double k, n, w{};
  cin >> k >> n >> w;
  // Sum of an Arithmetic Series: sn = (a1 + an) / 2)n
  double cost{k * (w * (w + 1)) / 2};
  cout << fixed << setprecision(0) << (n >= cost ? 0 : cost - n) << '\n';
}
