class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm
        int maxSum = INT_MIN;
        int sum = 0;
        for(auto i : nums){
            sum += i;
            maxSum = max(maxSum , sum);
            if(sum <0){
                sum = 0;
                continue;
            }

        }
        return maxSum;
    }
};