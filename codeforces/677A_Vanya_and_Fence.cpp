#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{}, h{};
  cin >> n >> h;
  int a{};
  int ans{0};
  for (int i = 0; i < n; ++i) {
    cin >> a;
    if (a > h) {
      ans += 2;
    } else {
      ++ans;
    }
  }

  cout << ans << '\n';
}
