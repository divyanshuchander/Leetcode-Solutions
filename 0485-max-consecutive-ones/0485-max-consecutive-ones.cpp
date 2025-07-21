class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxOnes = 0;
        for(auto i : nums){
            if(i == 1){
                counter++;
                if(counter>maxOnes){
                    maxOnes = counter;
                }
            }
            else if(i ==0) counter = 0;
        }
        return maxOnes;
    }
};