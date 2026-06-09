//Question 6 june 26
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long shbhm = 0;
        int exe = x;

        while (exe > 0) {
            int digit = exe % 10;
            shbhm = (shbhm * 10) + digit;
            exe = exe / 10;
        }

        return (shbhm == x);
    }
};