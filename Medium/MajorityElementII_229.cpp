//Question 100 june26
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        vector<int> ans;
        int n = nums.size();
        
        for (int x : nums) {
            freqMap[x]++;
        }
        
        for (auto it : freqMap) {
            if (it.second > n / 3) {
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};