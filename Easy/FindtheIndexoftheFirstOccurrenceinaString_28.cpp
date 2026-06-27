
//Queston 95 june26
class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.length();
        int s2 = needle.length();
        
        if (s2 == 0) return 0;
        
        for (int i = 0; i <= s1 - s2; i++) {
            for (int j = 0; j < s2; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
                if (j == s2 - 1) {
                    return i;
                }
            }
        }
        
        return -1;
    }
};