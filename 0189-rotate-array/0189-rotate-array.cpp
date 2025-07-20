class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sizeOfArray = nums.size();
        k = k%sizeOfArray;      //Important Step

        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(),nums.end());
    }
};