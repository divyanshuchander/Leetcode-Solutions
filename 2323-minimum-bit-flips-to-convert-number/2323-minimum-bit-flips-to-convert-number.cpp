class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flipBits = start ^ goal;
        int cnt = 0;
        while(flipBits != 0){
            cnt++;
            flipBits = flipBits & (flipBits-1);
        }
        return cnt;
    }
};