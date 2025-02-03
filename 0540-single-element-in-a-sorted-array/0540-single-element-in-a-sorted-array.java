class Solution {
    public int singleNonDuplicate(int[] nums) {
        int s = 0 , e = nums.length -1;
        if(nums.length <=1) return nums[0];
        if(nums[0]!= nums[1]) return nums[0];
        if(nums[e] != nums[e-1]) return nums[e];
        while(s<e){
            int m = s+(e-s)/2;
            if(m%2 == 0){
                if(nums[m] == nums[m+1]){
                    s = m+2;
                }
                else e = m;
            }
            else{
                if(nums[m] == nums[m-1]){
                    s = m+1;
                }
                else e = m-1;
            }
      
        }
        return nums[s];
    }
}