//QUestion 106 june26
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (string c : patterns) {
            if (word.find(c) != string::npos) {
                cnt++;
            }
        }
        return cnt;
    }
};