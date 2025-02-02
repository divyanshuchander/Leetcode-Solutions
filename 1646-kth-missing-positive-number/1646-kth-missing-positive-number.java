class Solution {
    public int findKthPositive(int[] arr, int k) {
        int i = 0, length = arr.length;
        int missingCount= 0; 
        int currentNo = 1;
        while(missingCount<k){
            if(i<arr.length && arr[i] == currentNo){
                i++;
            }
            else{
                missingCount++;
                if(missingCount == k) return currentNo;
            }
            currentNo++;
        }
        return -1;
        
    }
}