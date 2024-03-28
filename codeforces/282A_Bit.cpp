#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x{0};
  int n;
  cin >> n;
  string s;
  while (n--) {
    cin >> s;
    if (s[1] == '+') {
      ++x;
    } else {
      --x;
    }
  }
  cout << x << '\n';
}
