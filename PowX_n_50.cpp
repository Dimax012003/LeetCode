class Solution {
public:
    double helper(double x, long long n) {
        // base case
        if (n == 0) return 1;

        // recursive call
        double half = helper(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }

    double myPow(double x, int n) {
        // base case
        if (n == 0) return 1;
        if (n == 1) return x;

        // if n is negative
        if (n < 0) {
            x = 1 / x;
            // checking for minimum value of n
            if (n == INT_MIN) {
                // If n is INT_MIN, handle it separately to avoid precision issues
                n = -(n + 1);
                double result = helper(x, n);
                return result * x;
            } else {
                n = -n;
            }
        }

        return helper(x, n);
    }
};