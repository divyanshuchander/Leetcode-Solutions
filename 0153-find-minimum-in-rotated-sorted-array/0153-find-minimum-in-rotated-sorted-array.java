class Solution {
    public int findMin(int[] nums) {
        int n = nums.length-1;
        if(nums.length==1) return nums[0];
        int s = 0 , e = n;
        while(s<e){
            int m = s+(e-s)/2;
            if(nums[m]>nums[n]){
                s = m+1;
            }
            else if(nums[m]<=nums[n]){
                e = m;
            }

        }
        return nums[e];
    }
}