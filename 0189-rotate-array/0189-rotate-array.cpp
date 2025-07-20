class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> rotatedNumbers;
        int sizeOfArray = nums.size();
        k = k%sizeOfArray;

        for(int i = sizeOfArray - 1; i>=sizeOfArray - k; i-- ){
            rotatedNumbers.push_back(nums[i]);
        }
        for(int i = sizeOfArray - k - 1 ; i>=0;i--){
            nums[i+k] = nums[i]; 
        }
        int i = 0;
        for(int i = 0 ; i<k;i++){
            nums[i] = rotatedNumbers.back();
            rotatedNumbers.pop_back();
        }
    }
};