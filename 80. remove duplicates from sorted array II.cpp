#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        for(int n : nums) {
            if(k < 2 || n != nums[k - 2]) {
                nums[k] = n;
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution solution;

    // Test case 1
    std::vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    
    int result1 = solution.removeDuplicates(nums1);

    std::cout << "Updated Array 1: ";
    for (int i = 0; i < result1; i++) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New Length 1: " << result1 << std::endl;

    // Test case 2
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    
    int result2 = solution.removeDuplicates(nums2);

    std::cout << "Updated Array 2: ";
    for (int i = 0; i < result2; i++) {
        std::cout << nums2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "New Length 2: " << result2 << std::endl;

    return 0;
}
