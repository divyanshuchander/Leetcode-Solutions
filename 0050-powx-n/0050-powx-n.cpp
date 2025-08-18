class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MIN) {
            return (1/(x * myPow(x ,abs(n+1))));
        }
        if (n < 0) {
            double ans = myPow(x, abs(n));
            return (1 / ans);
        }
        if (n == 0)
            return 1;
        if (n == 1)
            return x;

        if (n % 2 != 0)
            return x * myPow(x, n - 1);

        else {
            return myPow(x * x, n / 2);
        }
    }
};