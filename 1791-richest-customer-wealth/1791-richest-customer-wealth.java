class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxWealth = Integer.MIN_VALUE;
        for(int[] customer : accounts){
            int wealth = 0;
            for(int bankBalance : customer){
                wealth += bankBalance;
            }
            if(wealth>maxWealth){maxWealth = wealth;}
        }
        return maxWealth;
    }
}