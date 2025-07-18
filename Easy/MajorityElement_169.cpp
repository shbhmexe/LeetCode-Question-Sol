class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int element = 0;

        // First Pass: Find candidate
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                element = nums[i];
            }
            else if (nums[i] == element) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Second Pass: Verify candidate (only needed if majority isn't guaranteed)
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == element) cnt1++;
        }

        if (cnt1 > nums.size() / 2) {
            return element;
        }
        return -1;
    }
};
