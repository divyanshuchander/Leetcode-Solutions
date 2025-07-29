class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() -1 ;
        int minNum = INT_MAX;

        while(low<=high){
            int mid = low + ((high-low)/2);
            minNum = min(minNum , nums[mid]);
            if(nums[mid]<=nums[high]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return minNum;
    }
};