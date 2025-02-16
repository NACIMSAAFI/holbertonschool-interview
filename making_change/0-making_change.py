#!/usr/bin/python3
"""
Change comes from within
"""


def makeChange(coins, total):
    """
    solves the problem of determining the fewest number
    of coins needed to make up a given total amount
    using a dynamic programming approach
    """

    if total <= 0:
        return 0

    # Initialize dp array with infinity
    dp = [float("inf")] * (total + 1)
    dp[0] = 0  # Base case: 0 coins are needed to make 0 amount

    # Fill the dp array
    for coin in coins:
        for i in range(coin, total + 1):
            if dp[i - coin] != float("inf"):
                dp[i] = min(dp[i], dp[i - coin] + 1)

    # If dp[total] still infinity means cannot make the total with given coins
    return dp[total] if dp[total] != float("inf") else -1


# Example usage:
if __name__ == "__main__":
    print(makeChange([1, 2, 25], 37))  # Output: 7
    print(makeChange([1256, 54, 48, 16, 102], 1453))  # Output: -1
