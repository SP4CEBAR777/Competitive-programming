#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;

  cout << fixed << setprecision(0) << (n % 2 == 0 ? pow(2, n / 2) : 0) << '\n';
  return 0;
}
