class Solution {
public:
    const long long MOD = 1000000007;

    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2;
        long long oddCount = n / 2;

        long long evenWays = power(5, evenCount);
        long long oddWays = power(4, oddCount);

        return (evenWays * oddWays) % MOD;
    }

    long long power(long long x, long long n) {
        // Base case
        if (n == 0) {
            return 1;
        }

        // Divide the problem into half
        long long half = power(x, n / 2);

        // If exponent is even
        if (n % 2 == 0) {
            return (half * half) % MOD;
        }
        // If exponent is odd
        else {
            return (x * ((half * half) % MOD)) % MOD;
        }
    }
};