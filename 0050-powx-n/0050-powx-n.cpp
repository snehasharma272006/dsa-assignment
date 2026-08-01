class Solution {
public:
    double myPow(double x, int n) {
        // Convert int to long long to avoid overflow for INT_MIN
        long long N = n;

        // Handle negative exponent
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return power(x, N);
    }

    double power(double x, long long n) {
        // Base case
        if (n == 0) {
            return 1;
        }

        // Divide the problem into half
        double half = power(x, n / 2);

        // If exponent is even
        if (n % 2 == 0) {
            return half * half;
        }
        // If exponent is odd
        else {
            return x * half * half;
        }
    }
};