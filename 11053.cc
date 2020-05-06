#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<int> dp(n);
  int max_len = 0;
  for (int i = 0; i < n; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (a[i] > a[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }
    max_len = max(max_len, dp[i]);
  }
  cout << max_len;

  return 0;
}
