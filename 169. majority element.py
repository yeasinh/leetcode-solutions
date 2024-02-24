class Solution(object):
    def majorityElement(self, nums):
        counts = {}

        for num in nums:
            if num in counts:
                counts[num] += 1
            else:
                counts[num] = 1

        majority_element = None
        max_count = 0

        for element, count in counts.items():
            if count > max_count:
                majority_element = element
                max_count = count

        return majority_element

def main():
    solution = Solution()

    # Test case 1
    nums1 = [3, 2, 3]
    result1 = solution.majorityElement(nums1)
    print(f"Majority Element 1: {result1}")

    # Test case 2
    nums2 = [2, 2, 1, 1, 1, 2, 2]
    result2 = solution.majorityElement(nums2)
    print(f"Majority Element 2: {result2}")

if __name__ == "__main__":
    main()
