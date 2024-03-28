#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b{};
  cin >> a >> b;
  int ans{};
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++ans;
  }

  cout << ans << '\n';
}
