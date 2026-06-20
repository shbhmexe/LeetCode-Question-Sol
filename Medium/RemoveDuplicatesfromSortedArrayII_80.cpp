//Question 55 june26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        
        int shbhm = 2;
        
        for (int exe = 2; exe < nums.size(); exe++) {
            if (nums[exe] != nums[shbhm - 2]) {
                nums[shbhm] = nums[exe];
                shbhm++;
            }
        }
        
        return shbhm;
    }
};