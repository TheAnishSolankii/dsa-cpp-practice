#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {

        // DP array
        vector<int> dp(amount + 1, INT_MAX);

        // Base case
        dp[0] = 0;

        // Build answers from 1 to amount
        for(int i = 1; i <= amount; i++) {

            // Try every coin
            for(int coin : coins) {

                // Valid case
                if(coin <= i && dp[i - coin] != INT_MAX) {

                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        // Impossible case
        if(dp[amount] == INT_MAX) {
            return -1;
        }

        return dp[amount];
    }
};

int main() {

    Solution obj;

    vector<int> coins = {1, 2, 5};

    int amount = 115;

    int ans = obj.coinChange(coins, amount);

    cout << "Minimum coins needed = " << ans;

    return 0;
}