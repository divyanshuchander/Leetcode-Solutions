class Solution {
public:
    //in this we map sum to its total occurence
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> prefixSum;
        int numCount = 0;
        prefixSum[0] = 1;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            int remaining = sum - k;
            if(prefixSum.find(remaining) != prefixSum.end()){
                numCount += prefixSum[remaining];
            }
            prefixSum[sum]++;
        }
        return numCount;
    }
};