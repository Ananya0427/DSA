class Solution{
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;

        long n = labs((long)dividend);
        long d = labs((long)divisor);
        long ans = 0;

        bool sign = !((dividend >= 0) ^ (divisor >= 0));

        while(n >= d) {
            long temp = d;
            long multiple = 1;
            while(n >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            ans += multiple;
        }

        if(ans >= (1LL << 31)) return sign ? INT_MAX : INT_MIN;
        return sign ? ans : -ans;
    }
};
