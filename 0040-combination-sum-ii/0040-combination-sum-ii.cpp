class Solution {
public:
    void findCombinationSum(int i, int sum, int target, vector<int>& subset,
                            vector<vector<int>>& answers,
                            vector<int>& candidates) {

        if (sum > target)
            return;
        if (i == candidates.size()) {
            if (sum == target) {
                answers.push_back(subset);
                return;
            }
            return;
        }

        subset.push_back(candidates[i]);
        findCombinationSum(i + 1, sum + candidates[i], target, subset, answers,
                           candidates);
        subset.pop_back();

        int j = i;
        while(j<candidates.size() && candidates[j] == candidates[i]){
            j++;
        }

        findCombinationSum(j, sum, target, subset, answers, candidates);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector<int>> answers;
        sort(candidates.begin() , candidates.end());
        vector<int> subset;
        findCombinationSum(0,0,target,subset,answers,candidates);
        return answers;
    }
};