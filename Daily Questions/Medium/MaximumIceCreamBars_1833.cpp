//Question 67 june26
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);
        
        for (int x : costs) {
            freq[x]++;
        }
        
        int totalIceCream = 0;
        
        for (int i = 1; i <= 100000; i++) {
            if (freq[i] > 0 && coins >= i) {
                int afford = coins / i;
                int take = min(afford, freq[i]);
                totalIceCream += take;
                coins -= take * i;
            }
            
            if (coins == 0) {
                break;
            }
        }
        
        return totalIceCream;
    }
};