//Question 30 june26
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int maxFreq = 0;
        int totalElements = 0;
        
        // Pass 1: Count frequencies and find the maximum frequency
        for (int num : nums) {
            freqMap[num]++;
            maxFreq = max(maxFreq, freqMap[num]);
        }
        
        // Pass 2: Sum the frequencies that match the maximum frequency
        for (auto pair : freqMap) {
            if (pair.second == maxFreq) {
                totalElements += pair.second;
            }
        }
        
        return totalElements;
    }
};