class Solution {
    public boolean isPerfectSquare(int num) {
        if(num == 1) return true;
        int s = 1 , e = num/2;
        while(s<=e){
            int m = s+(e-s)/2;
            long sq = (long) m*m;
            if(sq==num) return true;
            else if(sq<num) s = m+1;
            else e = m-1;
        }
        return false;
    }
}