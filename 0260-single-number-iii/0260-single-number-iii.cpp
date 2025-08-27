class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll =(long) 0;
        for(int i = 0; i<nums.size();i++){
            xorAll =  xorAll ^ nums[i];
        }
        int isSet = 0 , notSet = 0; //concept of buckets
        //now we have xor of a&b
        long long rightSetBit = (xorAll & (xorAll -1)) ^ xorAll;          // would give right most bit which is different
        for(int i = 0;i<nums.size(); i++){
            if((nums[i] & rightSetBit) == 0) notSet^=nums[i];
            else isSet^=nums[i];
        }
        return {isSet , notSet};
    }
};