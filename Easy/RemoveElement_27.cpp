//Question 54 june26
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int insert = 0;
        for (int scan = 0; scan < nums.size(); scan++) {
            if (nums[scan] != val) {
                nums[insert] = nums[scan];
                insert++;
            }
        }
        
        return insert;
    }
};