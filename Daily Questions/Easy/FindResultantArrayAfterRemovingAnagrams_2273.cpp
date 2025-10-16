//Question 486
//Approach (simple traverse and check)
//T.C : O(n*m)
//S.C : O(1)
class Solution {
public:
    bool checkAnagram(string &s1, string& s2) {
        int arr[26] = {0};

        for(char &ch : s1) {
            arr[ch-'a']++;
        }

        for(char &ch : s2) {
            arr[ch-'a']--;
        }
        
        for(int i = 0; i < 26; i++) {
            if(arr[i] != 0)
                return false;
        }

        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();

        vector<string> result;

        result.push_back(words[0]);

        for(int i = 1; i < n; i++) {
            if(!checkAnagram(words[i], result.back())) {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};
