class Solution {
    public int reverse(int x) {
        int MIN = Integer.MIN_VALUE;
        int MAX = Integer.MAX_VALUE;
        int num = 0;
        while(x!=0){
            int digit = x%10;
            if (num > (MAX / 10) || (num == MAX / 10 && digit > 7)) return 0; 
            if (num < (MIN / 10) || (num == MIN / 10 && digit < -8)) return 0;
            num = (num*10) + (digit);
            x /= 10;
        }
        return num;
    }
}