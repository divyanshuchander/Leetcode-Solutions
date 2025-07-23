class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute --> O(n^2)
        //better would use hashing O(nlogn) in case of ordered map
        //Moore's Voting Algo
        int element;
        int count = 0;

        for(int i = 0; i < nums.size();i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(nums[i] == element){
                count++;
            }
            else count--;
        }
        return element;
    }
};