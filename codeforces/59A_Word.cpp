#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s{};
  cin >> s;
  int uCnt{0};
  for (auto &x : s) {
    if (isupper(x)) {
      ++uCnt;
    }
  }
  if (s.length() - uCnt >= uCnt) {
    for (auto &x : s) {
      x = tolower(x);
    }
  } else {
    for (auto &x : s) {
      x = toupper(x);
    }
  }

  cout << s << '\n';
}
