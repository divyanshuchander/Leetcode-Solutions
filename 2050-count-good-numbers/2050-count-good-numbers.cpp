class Solution {
public:
    //applying mod on every step to avoid buffer overflow
    const long long MOD = 1000000007;
    long long exponentiation(long long num, long long exp) {
        long long ans = 1;
        while (exp > 0) {
            if (exp % 2 == 0) {
                num = (num * num)% MOD;
                exp = exp / 2;
            } else {
                ans = (ans * num)%MOD;
                num = (num * num)% MOD;
                exp = exp / 2;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        // recursive approach
        // it is a type of permutation question
        long long evenPlaces = (n + 1) / 2;
        long long oddPlaces = n / 2;
        long long ans = exponentiation(5, evenPlaces) * exponentiation(4, oddPlaces);
        int finalAns = ans % MOD;
        return finalAns;
    }
};