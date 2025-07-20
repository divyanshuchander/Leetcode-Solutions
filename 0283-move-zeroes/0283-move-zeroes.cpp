class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // finding first 0
        int j = -1;
        int arrSize = nums.size();
        for (int i = 0; i < arrSize; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1)
            return;

        for (int i = j + 1; i < arrSize; i++) {
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};