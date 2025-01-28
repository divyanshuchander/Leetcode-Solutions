class Solution {
    public int missingNumber(int[] nums) {
        cycleSort1toN(nums);
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i) return i;
        }
        return nums.length; // If all numbers are in place, missing number is n
    }

    static void cycleSort1toN(int[] arr) {
        int n = arr.length;
        int i = 0;
        while (i < n) {
            int element = arr[i];
            if (element >= n || element < 0 || arr[element] == element) {
                i++;
            } else {
                int temp = arr[element];
                arr[element] = element;
                arr[i] = temp;
            }
        }
    }
}