class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int largestSum) {
        int subArray = 1;
        int sumSub = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sumSub + nums[i] <= largestSum) {
                sumSub += nums[i];

            } else {
                subArray++;
                sumSub = nums[i];
            }

            if (subArray > k)
                return false;
        }
        
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int sum = 0;
        for (auto i : nums)
            sum += i;
        int high = sum;

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            if (isPossible(nums, k, mid)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};