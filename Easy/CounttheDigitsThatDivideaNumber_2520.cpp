//Question 5 june 2026
class Solution {
public:
    int countDigits(int num) {
        int shbhm = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            
            if (num % digit == 0) {
                shbhm++;
            }
            
            temp = temp / 10;
        }

        return shbhm;
    }
};