#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{}, a{}, b{};
  cin >> n;
  int capacity{0};
  int mx{0};

  for (int i = 0; i < n - 1; ++i) {
    cin >> a >> b;
    capacity -= a;
    capacity += b;
    mx = max(capacity, mx);
  }

  cout << mx << '\n';
}
