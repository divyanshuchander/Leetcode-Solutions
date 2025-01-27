class Solution {
    public int search(int[] arr, int target) {
         int start = 0, end = arr.length - 1;
        while(start <= end){
            int mid = (start + end)/2;
            if(arr[mid] == target) return mid;
            else if (target > arr[mid]) {
                start = mid + 1;
                continue;
            }
            else if(target<arr[mid]){
                end = mid - 1;
                continue;
            }
        }
        return -1;
    }
}