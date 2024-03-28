#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  string s{};
  cin >> n;

  while (n--) {
    cin >> s;
    if (s.size() > 10) {
      char front = s.front();
      char end = s.back();
      cout << front << s.size() - 2 << end << '\n';
    } else
      cout << s << '\n';
  }
}
