//Question 59 june26

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //brute force 
        // int n = nums.size();
        // k = k % n;
        
        // for (int step = 0; step < k; step++) {
        //     int temp = nums[n - 1];
        //     for (int j = n - 1; j > 0; j--) {
        //         nums[j] = nums[j - 1];
        //     }
        //     nums[0] = temp;
        // }

        //better 
        // int n = nums.size();
        // vector<int> ans(n);
        
        // for (int i = 0; i < n; i++) {
        //     ans[(i + k) % n] = nums[i];
        // }
        // nums = ans;

        //optimal
        int n = nums.size();
        k = k % n;
        
        reverse(nums.begin(), nums.end());
        
        reverse(nums.begin(), nums.begin() + k);
        
        reverse(nums.begin() + k, nums.end());
    }

};