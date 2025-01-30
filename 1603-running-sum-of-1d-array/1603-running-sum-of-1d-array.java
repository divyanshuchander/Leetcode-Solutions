class Solution {
    public int[] runningSum(int[] nums) {
        int runSum = 0;
        for(int i = 0; i<nums.length;i++){
            runSum+=nums[i];
            nums[i] = runSum;
        }
        return nums;
    }
}