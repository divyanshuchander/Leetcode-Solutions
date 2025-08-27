class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // using bit manipulation
        vector<vector<int>> answer;
        int start = 0;
        int end = (1 << nums.size()) - 1; // would result in 1111...n

        for (int i = 0; i <= end; i++) {
            vector<int> subset;
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j)) { // checking if jth bit is set or not
                    subset.push_back(nums[nums.size() - j - 1]);
                }
            }
            answer.push_back(subset);
        }

        return answer;
    }
};