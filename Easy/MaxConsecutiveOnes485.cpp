class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;    // To store the maximum consecutive 1's
        int currOnes = 0;   // To count current streak of consecutive 1's

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                currOnes++;  // Increment current count if 1 is found
            } else {
                // Update maximum if current streak is larger
                if(maxOnes < currOnes){
                    maxOnes = currOnes;
                }
                currOnes = 0;  // Reset current streak on encountering 0
            }
        }

        // Edge case: If the array ends with 1's, final update
        if(currOnes != 0 && maxOnes < currOnes){
            maxOnes = currOnes;
        }

        return maxOnes;
    }
};
