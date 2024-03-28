#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k, ans{};
  cin >> n >> k;
  int v[n];
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  for (int i = 0; i < n; ++i) {
    if (v[i] >= v[k - 1] && v[i] > 0) {
      ++ans;
    }
  }
  cout << ans << '\n';
}
