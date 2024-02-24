from typing import List

class Solution:
    def jump(self, nums: List[int]) -> int:
        count = 0
        # Set current window
        l = r = 0

        while r < len(nums) - 1:
            farthest = 0
            # Determine next window
            for i in range(l, r + 1):
                farthest = max(farthest, i + nums[i])
            # Update next window
            l = r + 1
            r = farthest
            count += 1
        
        return count

    def main(self):
        # Test case
        nums = [2, 3, 1, 1, 4]
        result = self.jump(nums)
        print("Minimum Jumps: ", result)

# Create an instance of the Solution class and call the main function
solution = Solution()
solution.main()
