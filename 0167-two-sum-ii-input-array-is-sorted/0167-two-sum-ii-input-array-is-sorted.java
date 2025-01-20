class Solution {
    public int[] twoSum(int[] num, int target) {
        int l = 0 , r = num.length-1; //since it is a 1 indexed array
        while(l<r){
            if( num[l]+num[r] == target) break;
            else if(num[l]+num[r] <target) l++;
            else r--;
        }
        return new int[]{l+1,r+1};
    }
}