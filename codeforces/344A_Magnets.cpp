#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;
  int ans{0};
  string prev{};
  string curr{};
  for (int i = 0; i < n; ++i) {
    cin >> curr;
    if (curr != prev) {
      ++ans;
      prev = curr;
    }
  }

  cout << ans << '\n';
}
