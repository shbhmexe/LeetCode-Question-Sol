//Question 469
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0) return INT_MAX;
        if(dividend == 0) return 0;
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX; 
        bool sign = (dividend > 0) ^ (divisor > 0);
        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long q = 0;
        while(dvd >= dvs) {
            long long count = 0;
            while(dvd >= (dvs << (count + 1))) {
                count++;
            }
            q += 1 << count;
            dvd -= dvs << count;
        }
        if(q > INT_MAX) return sign ? INT_MIN : INT_MAX;
        return sign ? -q : q;
    }
};