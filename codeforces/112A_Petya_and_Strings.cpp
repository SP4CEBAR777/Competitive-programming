#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s1, s2{};
  cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); ++i) {
    s1[i] = tolower(s1[i]);
  }
  for (int i = 0; i < s2.length(); ++i) {
    s2[i] = tolower(s2[i]);
  }

  int n{};
  n = clamp(s1.compare(s2), -1, 100);

  cout << n << '\n';
  return 0;
}
