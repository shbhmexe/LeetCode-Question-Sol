    //Question 49 june26
    class Solution {
    public:
        char processStr(string s, long long k) {
            vector<long long> lenHistory(s.size(), 0);
            long long currentLen = 0;

            for (int i = 0; i < s.size(); i++) {
                if (islower(s[i])) {
                    currentLen++;
                } else if (s[i] == '*') {
    
                    if (currentLen > 0) currentLen--;
                } else if (s[i] == '#') {
                    currentLen *= 2;
                } else if (s[i] == '%') {
                }
                lenHistory[i] = currentLen;
            }

            if (currentLen == 0 || k >= currentLen) {
                return '.';
            }

            for (int i = s.size() - 1; i >= 0; i--) {
                if (islower(s[i])) {
                    if (k == lenHistory[i] - 1) {
                        return s[i];
                    }
                } else if (s[i] == '%') {
                    if (lenHistory[i] > 0) {
                        k = (lenHistory[i] - 1) - k;
                    }
                } else if (s[i] == '#') {
                    long long half = lenHistory[i] / 2;
                    if (half > 0 && k >= half) {
                        k %= half;
                    }
                }
            }

            return '.';
        }
    };