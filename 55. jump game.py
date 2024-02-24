from typing import List

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        goal = len(nums) - 1

        for i in range(len(nums) - 1, -1, -1):
            if i + nums[i] >= goal:
                goal = i

        return goal == 0

    def main(self):
        # Test case
        nums = [2, 3, 1, 1, 4]
        result = self.canJump(nums)
        print("Can Jump: ", result)

# Create an instance of the Solution class and call the main function
solution = Solution()
solution.main()
