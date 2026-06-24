//Question 71 june26
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<int , int> freq;

        for(auto x : text){
            freq[x]++;
        }

        int b = freq['b'];
        int a = freq['a'];
        int l = freq['l'] / 2;
        int o = freq['o'] / 2;
        int n = freq['n'];
        
        return min({b, a, l, o, n});
    }
};