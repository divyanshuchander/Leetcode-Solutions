class Solution {
    public boolean isPalindrome(int x) {
        if(x>=0 && x<10) return true;
        else if(x<0) return false;
        int length = (int)(Math.log10(x))+1;
        if(length % 2 == 0){
            int halfReverse = 0;
            int count = length/2;
            while(count>0){
                halfReverse = halfReverse * 10 + (x%10);
                x/=10;
                count--;
            }
            if (x==halfReverse) return true;
        }
        else{
            int halfReverse = 0;
            int count = length/2;
            while(count>0){
                halfReverse = halfReverse * 10 + (x%10);
                x/=10;      
                count--;          
            }
            x/=10;
            if(x==halfReverse) return true;
        }
        return false;
        
    }
}
