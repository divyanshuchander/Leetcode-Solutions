class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //writing the optimal 
        int singleNoXOR = 0;
        for(auto i : nums){
            singleNoXOR = singleNoXOR ^ i;
        }
        return singleNoXOR;
    }
};