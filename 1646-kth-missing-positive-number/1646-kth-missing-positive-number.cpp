class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {  //optimal binary approach
        int n = arr.size()-1;
        int low = 0 , high = n;

        while(low<=high){
            int mid = low + ((high -low)/2);
            int missing = arr[mid] - (mid + 1);
            if(missing < k){
                low = mid+1;
            }
            else if(missing >= k){
                high = mid-1;
            }
        }
        if(high == -1) return k;
        //since high would cross the place where missing < k
        return arr[high] + (k - (arr[high] - (high +1)));        
    }
};