class Solution {
    public int mySqrt(int x) {
        int s = 0 , e = x;
        int ans = 0;
        while(s<=e){
            int m = s+(e-s)/2;
            long mSqr = (long)m*m;
            if(mSqr == x) return m;
            else if(mSqr>x){
                e = m-1;
            }
            else{ s = m+1;
            ans = m;}
        }
        return ans;
    }
}