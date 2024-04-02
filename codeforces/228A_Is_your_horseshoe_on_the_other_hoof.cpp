#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> s(4);
  int cnt{0};
  int curr{0};

  for (int i = 0; i < 4; ++i) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < 4; ++i) {
    if (s[i] != curr) {
      ++cnt;
      curr = s[i];
    }
  }

  cout << 4 - cnt << '\n';
}
