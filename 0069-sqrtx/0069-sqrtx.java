class Solution {
    public int mySqrt(int x) {
        if (x == 0) return 0; 
        int start = 1, end = x, answer = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            long square = (long) mid * mid; 
            if (square <= x) {
                answer = mid; // 
                start = mid + 1; 
            } else {
                end = mid - 1; 
            }
        }
        return answer;
    }
}