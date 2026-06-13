//Question 33 june26

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string exe = "";
        
        for (string w : words) {
            int shbhm = 0;
            
            for (char c : w) {
                shbhm += weights[c - 'a'];
            }
            
            exe += ('z' - (shbhm % 26));
        }
        
        return exe;
    }
};