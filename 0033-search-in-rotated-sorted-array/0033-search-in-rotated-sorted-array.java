class Solution {
    public static int search(int[] arr, int target) {
        if(arr[0] <= arr[arr.length -1]) return binarySearch(arr,target,0,arr.length -1);
        int pivot = pivotSearch(arr);
        if(arr[pivot]==target) return pivot;
        int ans = binarySearch(arr , target , 0 , pivot - 1 );
        if(ans != -1) return ans;
        ans = binarySearch(arr , target, pivot+1 ,arr.length -1);
        return ans;
    }

    static int pivotSearch(int[] arr){
         int start = 0, end = arr.length - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }

    static int binarySearch(int[] arr, int target, int start , int end){
        while(start<=end){
            int mid = start + (end - start)/2;
            int element = arr[mid];
            if(element == target) return mid;
            else if(element<target){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
        }
        return -1;
    }
}