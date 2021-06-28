#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  vector<int> dp(n + 1);
  for (int i = 1; i <= n; i++) {
    dp[i] = a[i];
    for (int j = 1; j < i; j++) {
      if (a[i] > a[j])
        dp[i] = max(dp[i], dp[j] + a[i]);
    }
  }
  cout << *max_element(dp.begin(), dp.end());

  return 0;
}
