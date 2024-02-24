import java.util.Arrays;

class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;

        int[] arr = new int[n];

        System.arraycopy(nums, n - k, arr, 0, k);
        System.arraycopy(nums, 0, arr, k, n - k);
        System.arraycopy(arr, 0, nums, 0, n);
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        // Test case 1
        int[] nums1 = {1, 2, 3, 4, 5, 6, 7};
        int k1 = 3;
        solution.rotate(nums1, k1);
        System.out.println("Rotated Array 1: " + Arrays.toString(nums1));

        // Test case 2
        int[] nums2 = {-1, -100, 3, 99};
        int k2 = 2;
        solution.rotate(nums2, k2);
        System.out.println("Rotated Array 2: " + Arrays.toString(nums2));
    }
}
