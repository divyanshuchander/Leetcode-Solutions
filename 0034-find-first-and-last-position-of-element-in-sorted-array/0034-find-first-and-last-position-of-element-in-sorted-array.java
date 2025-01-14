class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start = 0 , end = nums.length -1;
        int[] index = {-1,-1};
        //2 binary searches
        //left index search
        int lft = -1 , rght = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                end = mid - 1;
                lft = mid;
            }
            else if(nums[mid]< target){
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
        }
        index[0] = lft;
        start = 0; end = nums.length-1;
        //right index search
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                start = mid + 1;
                rght = mid;
            }
            else if(nums[mid]< target){
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
        }
        index[1] = rght;
        return index;

    }
}
