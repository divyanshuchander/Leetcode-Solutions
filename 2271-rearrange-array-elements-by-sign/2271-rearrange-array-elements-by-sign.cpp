class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // optimal approach;
        int i = 0;
        int j = 1;
        vector<int> ans(nums.size());
        for (auto num : nums) {
            if (num >= 0) {
                ans[i] = num;
                i += 2;
            } else {
                ans[j] = num;
                j += 2;
            }
        }
        return ans;
    }
};