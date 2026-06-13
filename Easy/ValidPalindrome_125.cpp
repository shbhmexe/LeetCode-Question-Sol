
//Question 29 june26
class Solution {
public:
    bool isPalindrome(string s) {
        int shbhm = 0;
        int exe = s.size() - 1;
        
        while (shbhm < exe) {
            if (!isalnum(s[shbhm])) {
                shbhm++;
            } else if (!isalnum(s[exe])) {
                exe--;
            } else if (tolower(s[shbhm]) != tolower(s[exe])) {
                return false;
            } else {
                shbhm++;
                exe--;
            }
        }
        
        return true;
    }
};  