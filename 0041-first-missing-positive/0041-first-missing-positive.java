class Solution {
    public int firstMissingPositive(int[] nums) {
        int n = nums.length;
        int i = 0;
        while(i<n){
            int element = nums[i];
            if(element>0 && element <= n && element!= i+1 && nums[element - 1] != element){
                int temp = nums[element - 1];
                nums[element - 1] = element;
                nums[i] = temp;
            }
            else i++;
        }

        for(int j = 0; j<n; j++){
            if(nums[j] != j+1) return j+1;
        }
        return n+1;
    }
} 