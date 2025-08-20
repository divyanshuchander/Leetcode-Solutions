class Solution {
public:
    void generatePowerSet(int i, vector<int>& subset,
                          vector<vector<int>>& powerSet, vector<int>& nums) {
        if (i == nums.size()) {
            powerSet.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        generatePowerSet(i + 1, subset, powerSet, nums);
        subset.pop_back();
        generatePowerSet(i + 1, subset, powerSet, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> subset;
        generatePowerSet(0, subset, powerSet, nums);
        return powerSet;
    }
};