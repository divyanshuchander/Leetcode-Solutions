class Solution {
public:

    void generateSubset(int i , vector<int>& subset , vector<int>& nums ,vector<vector<int>>& answers ){
        if(i == nums.size()){
            answers.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        generateSubset(i+1 , subset , nums, answers);
        subset.pop_back();
        int j = i;
        while(j<nums.size() && nums[i] == nums[j]) j++;
        generateSubset(j , subset , nums, answers);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answers;
        vector<int> subset;
        sort(nums.begin() , nums.end());
        generateSubset(0 , subset , nums,answers);

        return answers;
    }
};