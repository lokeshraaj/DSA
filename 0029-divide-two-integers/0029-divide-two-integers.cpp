class Solution {
public:
    int divide(int p, int q) {

        // Overflow case
        if (p == INT_MIN && q == -1)
            return INT_MAX;

        // Determine sign
        bool negative = (p < 0) ^ (q < 0);

        // Convert to long long to safely handle INT_MIN
        long long a = abs((long long)p);
        long long b = abs((long long)q);

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Find largest multiple of divisor
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            // Subtract it
            a -= temp;

            // Add corresponding quotient
            ans += multiple;
        }

        // Apply sign
        if (negative)
            ans = -ans;

        return (int)ans;
    }
};