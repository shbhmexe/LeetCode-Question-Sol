//Question 80 june26
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        
        for (; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                break;
            }
        }
        
        if (i != 0) {
            int j = n - 1;
            for (; j >= i; j--) {
                if (nums[j] > nums[i - 1]) {
                    break;
                }
            }
            swap(nums[i - 1], nums[j]);
        }
        
        reverse(nums.begin() + i, nums.end());
    }
};