#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution solution;

    // Test case 1
    std::vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;

    int result1 = solution.removeElement(nums1, val1);

    std::cout << "Updated Array 1: ";
    for (int i = 0; i < result1; i++) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New Length 1: " << result1 << std::endl;

    // Test case 2
    std::vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;

    int result2 = solution.removeElement(nums2, val2);

    std::cout << "Updated Array 2: ";
    for (int i = 0; i < result2; i++) {
        std::cout << nums2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New Length 2: " << result2 << std::endl;

    return 0;
}
