//qUESTION 96 june26 
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 1;
        
        auto it1 = lower_bound(nums.begin(), nums.end(), 1);
        auto it2 = upper_bound(nums.begin(), nums.end(), 1);
        int count1 = it2 - it1;
        
        if (count1 > 0) {
            ans = count1 % 2 == 0 ? count1 - 1 : count1;
        }
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) continue;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            long long curr = nums[i];
            int len = 0;
            
            while (true) {
                if (curr > 1e9) {
                    ans = max(ans, len - 1);
                    break;
                }
                
                auto lb = lower_bound(nums.begin(), nums.end(), curr);
                auto ub = upper_bound(nums.begin(), nums.end(), curr);
                int freq = ub - lb;
                
                if (freq >= 2) {
                    len += 2;
                    curr = curr * curr;
                } else if (freq == 1) {
                    len += 1;
                    ans = max(ans, len);
                    break;
                } else {
                    ans = max(ans, len - 1);
                    break;
                }
            }
        }
        
        return ans;
    }
};