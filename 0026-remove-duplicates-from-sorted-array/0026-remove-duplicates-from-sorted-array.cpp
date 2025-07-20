class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(auto it = nums.begin(); it!=nums.end();it++){
            if(*(it)!= nums[i]){
               i++;
               nums[i] = *(it);
           }
     }
        return i+1; //i dont get it
    }
};