#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ar[6][6];
  for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 5; ++j) {
      cin >> ar[i][j];
      if (ar[i][j] == 1) {
        cout << abs(3 - i) + abs(3 - j) << '\n';
        return 0;
      }
    }
  }
}
