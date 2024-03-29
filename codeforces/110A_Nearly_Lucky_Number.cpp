#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, cnt{};
  cin >> n;

  while (n != 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      ++cnt;
    }
    n /= 10;
  }

  cout << (cnt == 7 || cnt == 4 ? "YES" : "NO") << '\n';
}
