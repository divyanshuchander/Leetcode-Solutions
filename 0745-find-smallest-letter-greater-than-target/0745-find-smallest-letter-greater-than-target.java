class Solution {
    public char nextGreatestLetter(char[] arr, char target) {
        int start = 0 , end = arr.length - 1;
        int index = 0;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]> target){
                index = mid;
                end = mid -1;
            }
            else if(arr[mid]<=target){
                start = mid+1;
            }
        }
        return arr[index];
    }
}