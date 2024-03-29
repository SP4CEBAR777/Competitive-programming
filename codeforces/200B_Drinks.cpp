#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;
  double sum{};
  for (int i = 0; i < n; ++i) {
    double p{};
    cin >> p;
    sum += p;
  }

  cout << fixed << setprecision(12) << sum / n << '\n';
}
