#include <iostream>
#include <vector>

using namespace std;
const int kMod = 15746;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 1);
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % kMod;
  cout << dp[n];

  return 0;
}
