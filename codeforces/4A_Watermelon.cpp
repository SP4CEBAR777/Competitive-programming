#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;

  cout << (n > 2 && n % 2 == 0 ? "YES" : "NO") << '\n';
}
