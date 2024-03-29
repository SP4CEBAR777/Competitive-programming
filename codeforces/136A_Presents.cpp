#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n{};
  cin >> n;
  int arr[n + 1];
  for (int receiver = 1; receiver <= n; ++receiver) {
    int giver{};
    cin >> giver;
    arr[giver] = receiver;
  }
  for (int i = 1; i <= n; ++i) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}
