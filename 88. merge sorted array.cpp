#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1, i = m + n - 1;

        while(p2 >= 0) {
            if(p1 >= 0 && nums1[p1] > nums2[p2])
                nums1[i--] = nums1[p1--];
            else
                nums1[i--] = nums2[p2--];
        }
    }
};

int main() {
    Solution solution;

    // Test case 1
    std::vector<int> nums1_1 = {1, 2, 3, 0, 0, 0};
    int m1 = 3;
    std::vector<int> nums2_1 = {2, 5, 6};
    int n1 = 3;

    solution.merge(nums1_1, m1, nums2_1, n1);

    std::cout << "Merged Array 1: ";
    for (int num : nums1_1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Test case 2
    std::vector<int> nums1_2 = {4, 5, 6, 0, 0, 0};
    int m2 = 3;
    std::vector<int> nums2_2 = {1, 2, 3};
    int n2 = 3;

    solution.merge(nums1_2, m2, nums2_2, n2);

    std::cout << "Merged Array 2: ";
    for (int num : nums1_2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
