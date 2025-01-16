/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray arr) {
        int s = 0, e = arr.length() - 1;
        while (s < e) {  
            int m = s + (e - s) / 2; 
            if (arr.get(m) < arr.get(m+1)) {
                s = m + 1;  
            } else {
                e = m;    
            }
        }
        if(arr.get(s) == target) return s;
        int peak = s;
        int ans = orderAgnosticBinary(arr , target , 0 , peak-1);
        if(ans!= -1){
            return ans;
        }
        else{
            ans = orderAgnosticBinary(arr , target, peak+1,arr.length()-1);
        }
        return ans;

         
    }
    
    static int orderAgnosticBinary(MountainArray arr, int target, int start ,int end){
        boolean iAsc = arr.get(start) <= arr.get(end); 
        while(start<=end){
            int mid = (start + end)/2;
            int ele = arr.get(mid);
            if(ele == target) return mid;
            else if(iAsc){
                if(target < ele){
                    end = mid - 1;
                }
                else if(target>ele){
                    start = mid + 1;
                }
            }
            else{
                if(target < ele){
                    start = mid + 1;
                }
                else if(target>ele){
                    end = mid - 1;
                }
            }
        }
        return -1;

    }
}