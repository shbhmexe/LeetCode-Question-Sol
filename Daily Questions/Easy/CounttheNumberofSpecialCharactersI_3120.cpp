//Question 790
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> shbhm(26, 0);
        vector<int> exe(26, 0);

        for(int i = 0; i < word.length(); i++){
            char ch = word[i];
            if(ch >= 'a' && ch <= 'z'){
                shbhm[ch - 'a'] = 1;
            }
            if(ch >= 'A' && ch <= 'Z'){
                exe[ch - 'A'] = 1;
            }
        }

        int count = 0;
        for(int i = 0; i < 26; i++){
            if(shbhm[i] == 1 && exe[i] == 1){
                count++;
            }
        }
        
        return count;
    }
};