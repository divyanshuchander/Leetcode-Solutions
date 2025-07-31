class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int answer = -1;
        int low = 1;
        int high = INT_MIN;
        for (auto i : nums)
            high = max(high, i);

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int sum = 0;
            for (auto i : nums) {
                sum += ceil((double)i / mid);
                if (sum > threshold) {
                    sum = -1;
                    break;
                }
            }
            if (sum == -1) {
                low = mid + 1;
            } else {
                answer = mid;
                high = mid - 1;
            }
        }
        return answer;
    }
};