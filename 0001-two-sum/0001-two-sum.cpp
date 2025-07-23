class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> eleIndex;
        int i = 0;
        for(int i = 0; i<nums.size();i++){
            int remaining = target-nums[i];
            if(eleIndex.find(remaining) != eleIndex.end()){
                return {i , eleIndex[remaining]};
            }
            else{
                eleIndex[nums[i]] = i;
            }

        }
        return {-1,-1};
    }
};