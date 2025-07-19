class Solution {
public:
    bool check(vector<int>& nums) {
        //find the mid peak
        int shift =0;
        for(auto i = nums.rbegin();i!=nums.rend();i++){
            if(i==nums.rend()-1){
                shift++;
                break;
            }
            if(*(i) < *(i+1)){
                shift++; 
                break;
            }
            else shift++;
        }
        int length = nums.size();
        int k = length - shift; 
        for(int i = 0; i<length-1;i++){
            if(nums[(i+k+1)%length] < nums[(i+k)%length]) return false;
            
        }
        return true;
    }
};