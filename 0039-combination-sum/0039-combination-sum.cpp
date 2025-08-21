class Solution {
public:
    void findCombination(int i, int sum, int target, vector<int>& subset,
                         vector<vector<int>>& powerSet, vector<int>& candidates) {
        
        if(sum>target) return;
        if (sum == target) {
            powerSet.push_back(subset);
            return;
        }
        if (i == candidates.size() && sum != target) {
            return;
        }
        subset.push_back(candidates[i]);
        findCombination(i, sum + candidates[i], target, subset, powerSet,
                        candidates);
        // findCombination(i + 1, sum + candidates[i], target, subset, powerSet,
        //                 candidates);
        //This condition is not required think carefully
        subset.pop_back();
        findCombination(i + 1, sum, target, subset, powerSet, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> subset;

        findCombination(0, 0, target, subset, answer, candidates);
        return answer;
    }
};