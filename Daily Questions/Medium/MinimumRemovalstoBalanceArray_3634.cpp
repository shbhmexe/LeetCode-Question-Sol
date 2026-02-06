//Question 727
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int minRemovals = n;

    for (int i = 0; i < n; ++i) {
        // Binary search to find max index j such that nums[j] <= nums[i] * k
        int left = i, right = n - 1, valid = i;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= (long long)nums[i] * k) {
                valid = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        int keep = valid - i + 1;
        minRemovals = min(minRemovals, n - keep);
    }

    return minRemovals;
}

    
};