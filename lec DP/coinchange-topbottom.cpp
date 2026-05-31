#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:

    // DP array
    vector<int> dp;

    int solve(vector<int>& coins, int amount) {

        // ================= BASE CASES =================

        // If amount becomes 0
        // No more coins needed
        if(amount == 0) {
            return 0;
        }

        // Invalid case
        if(amount < 0) {
            return INT_MAX;
        }

        // ================= DP CHECK =================

        // Already solved
        if(dp[amount] != -1) {
            return dp[amount];
        }

        // Store minimum coins
        int minCoins = INT_MAX;

        // ================= TRY EVERY COIN =================

        for(int coin : coins) {

            // Only valid if coin <= amount
            if(coin <= amount) {

                // Solve smaller problem
                int res = solve(coins, amount - coin);

                // Avoid overflow
                if(res != INT_MAX) {

                    minCoins = min(minCoins, res + 1);
                }
            }
        }

        // Store answer in DP
        dp[amount] = minCoins;

        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {

        // Initialize DP with -1
        dp.assign(amount + 1, -1);

        int ans = solve(coins, amount);

        // Impossible case
        if(ans == INT_MAX) {
            return -1;
        }

        return ans;
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