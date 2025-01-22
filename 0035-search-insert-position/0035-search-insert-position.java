class Solution {
    public int searchInsert(int[] nums, int target) {
        //basically i have to find ceil of target
        int s =0 , e = nums.length - 1;
        int ans = 0;
        if(target< nums[0]) return 0;
        if(target>nums[nums.length-1]) return e+1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m] == target) return m;
            else if(nums[m]>target){
                ans = m;
                e = m-1;
            }
            else s = m+1;

        }
        return ans;
    }
}