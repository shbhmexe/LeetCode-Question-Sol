//Question 17 june 26
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long shbhm = *max_element(nums.begin(), nums.end());
        long long exe = *min_element(nums.begin(), nums.end());

        long long ans = k * (shbhm - exe);
        return ans;
    }
};