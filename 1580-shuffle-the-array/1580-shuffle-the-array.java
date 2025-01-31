class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[2*n]; 
        int i =0,j=0;
        while(i < 2*n){
            ans[i] = nums[j];
            ans[i+1] = nums[j+n];
            j++;
            i+=2;
        }
        return ans;
    }
}