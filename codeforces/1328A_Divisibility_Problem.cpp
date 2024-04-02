#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int a{}, b{};
    cin >> a >> b;
    cout << ((a % b == 0) ? a % b : b - a % b) << '\n';
  }
}
