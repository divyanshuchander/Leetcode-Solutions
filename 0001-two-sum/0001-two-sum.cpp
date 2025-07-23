class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> eleIndex;
        int i = 0;
        for(auto num : nums){
            int remaining = target-num;
            if(eleIndex.find(remaining) != eleIndex.end()){
                indices.push_back(i);
                indices.push_back(eleIndex[remaining]);
                break;
            }
            else{
                eleIndex[num] = i;
                i++;
            }

        }
        return indices;
    }
};