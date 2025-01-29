class Solution {
    public int[] findErrorNums(int[] nums) {
        int pos = 0;
        int n = nums.length;
        while(pos < n){
            if(nums[pos]>n || nums[nums[pos]-1] == nums[pos] || nums[pos] == pos+1) pos++;
            else{
                int temp = nums[nums[pos] - 1];
                nums[nums[pos] - 1] = nums[pos];
                nums[pos] = temp;
            }
        }

        for(int i = 0; i<n; i++){
            if(nums[i]!= (i+1)) return new int[]{nums[i] , i+1};
        }
        return null;
    }
}