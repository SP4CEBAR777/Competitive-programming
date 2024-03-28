#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s{};
  cin >> s;
  sort(s.begin(), s.end());
  int j{0};
  for (int i = s.length() / 2; i < s.length(); ++i) {
    cout << s[i];
    if (j < s.length() / 2) {
      cout << s[j++];
    }
  }
  cout << '\n';
}
