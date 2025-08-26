class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        bool isNegative = (dividend>=0) ^ (divisor > 0);
        long long dividendL = abs((long long)dividend);
        long long divisorL = abs((long long)divisor);
        if(dividend == divisor){
            int ans = isNegative? -1 :  1;
            return ans;
        }
        long long quotient = 0;
        long long pow2 = 1;
        while(dividendL>=divisorL){
            if(divisorL*(pow2<<1) > dividendL){
                dividendL -= divisorL*pow2;
                quotient += pow2;
                pow2 = 1;

            }
            else if(divisorL* (pow2<<1) <= dividendL){
                pow2 = pow2<<1;
            }
        }
        if(isNegative) return -1*quotient;
        return quotient;
        
    }
};