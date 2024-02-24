class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        buy_at = 0
        sell_at = 1
        max_profit = 0

        while sell_at < len(prices):
            curr_profit = prices[sell_at] - prices[buy_at]
            if prices[sell_at] > prices[buy_at]:
                max_profit = max(max_profit, curr_profit)
            else:
                buy_at = sell_at
            
            sell_at += 1
        
        return max_profit

    def main(self):
        # Test case
        prices = [7, 1, 5, 3, 6, 4]
        result = self.maxProfit(prices)
        print("Max Profit: ", result)

# Create an instance of the Solution class and call the main function
solution = Solution()
solution.main()
