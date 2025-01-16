class Solution {
    public int findPeakElement(int[] arr) {
         int s = 0, e = arr.length - 1;
        while (s < e) {  
            int m = s + (e - s) / 2;  // Prevent overflow for large values of `s` and `e` ***Important***
            if (arr[m] < arr[m + 1]) {
                s = m + 1;  
            } else {
                e = m; 
                 
            }
        }
        return s;  
    }
}