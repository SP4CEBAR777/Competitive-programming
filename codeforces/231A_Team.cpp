#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;
  int ans{};

  while (n--) {
    int p, v, t{};
    cin >> p >> v >> t;
    if ((p + v + t) >= 2) {
      ++ans;
    }
  }
  cout << ans;
}
