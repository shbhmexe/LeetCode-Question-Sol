//Question 791
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>small(26,-1);
        vector<int>big(26,-1);

        for(int i = 0; i < word.length(); i++){
            char ch = word[i];
            if(ch >= 'a' && ch <= 'z'){
                small[ch - 'a'] = i;
            }
            if(ch >= 'A' && ch <= 'Z'){
                if (big[ch - 'A'] == -1){
                    big[ch - 'A'] = i;
                }
            }
        }
        int count = 0;
        for(int i = 0; i <= 25; i++){
            if(small[i] != -1 && big[i] != -1 && small[i] < big[i]){
                count++;
            }
        }
        return count;
    }
};