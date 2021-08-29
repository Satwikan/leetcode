class Solution {
public:
    int divide(long long dividend, long long divisor) {
        int sign = ((dividend < 0) ^
              (divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0, temp = 0;
        for (int i = 31; i >= 0; --i) {
            if (temp + (divisor << i) <= dividend) {
              temp += divisor << i;
              quotient |= 1LL << i;
            }
        }
        quotient = sign*quotient;
        if (quotient >= (1LL << 31)) return (1LL << 31) - 1;
        return quotient;
    }
};