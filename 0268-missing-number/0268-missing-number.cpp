class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSize = nums.size();
        int xor1 = 0;   //array element xor
        int xor2 = 0;   //full elements xor

        for(int i = 0;i<totalSize;i++){
            xor1 = xor1 ^ nums[i];
            xor2 = xor2 ^ i+1;
        }
        return xor1 ^ xor2;
    }
};