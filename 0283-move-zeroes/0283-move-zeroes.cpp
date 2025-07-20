class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> nonZeroNumbers;
        for(auto num : nums){
            if(num!=0){
                nonZeroNumbers.push_back(num);
            }
        }
        int i = 0;
        for(auto num : nonZeroNumbers){
            nums[i] = num;
            i++;
        }
        while(i<nums.size()) {
            nums[i] = 0;
            i++;
        }
    }
};