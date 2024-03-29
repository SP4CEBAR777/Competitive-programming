#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{}, k{};
  cin >> n;
  int sum{0};
  for (int i = 0; i < n; ++i) {
    cin >> k;
    sum += k;
  }

  cout << (sum > 0 ? "HARD" : "EASY") << '\n';
}
