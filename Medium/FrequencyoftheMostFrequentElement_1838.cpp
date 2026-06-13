//Question 32 june26
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Step 1: Sort to group closest numbers
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int maxFreq = 0;
        long long windowSum = 0; // Use long long to prevent integer overflow
        
        // Step 3: Expand the window
        for (int right = 0; right < nums.size(); right++) {
            
            windowSum += nums[right];
            long long target = nums[right];
            long long windowSize = right - left + 1;
            
            // Step 4: If it costs more than k coins, shrink from the left
            while ((windowSize * target) - windowSum > k) {
                windowSum -= nums[left];
                left++;
                windowSize = right - left + 1; // Update size after shrinking
            }
            
            // Step 5: Window is now valid, save the maximum size found so far
            maxFreq = max(maxFreq, (int)windowSize);
        }
        
        return maxFreq;
    }
};