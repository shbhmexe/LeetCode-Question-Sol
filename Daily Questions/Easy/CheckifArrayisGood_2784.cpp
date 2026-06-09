//Question 769
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size(); // Array ka total size
        
        // Step 1: Array ko chote se bade mein sort kar lo
        sort(nums.begin(), nums.end());
        
        // Step 2: Shuru se lekar second-last element tak sequence check karo
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] != i + 1) {
                return false; // Agar sequence toota (jaise 1 ke baad 3 aa gaya), toh false
            }
        }
        
        // Step 3: Aakhri bacha hua number check karo
        return nums[n - 1] == n - 1; 
    }
};