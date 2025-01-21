class Solution {
    public int arrangeCoins(int n) {
        return (int)((-1 + Math.sqrt((long)1 + 8L * n)) / 2); //long data type
    }
}