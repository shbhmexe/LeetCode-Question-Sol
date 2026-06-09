//Question 4
class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_val = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int current_sum = 0;
            
            while (temp > 0) {
                current_sum += temp % 10;
                temp /= 10;
            }
            
            if (current_sum < min_val) {
                min_val = current_sum;
            }
        }
        
        return min_val;
    }
};