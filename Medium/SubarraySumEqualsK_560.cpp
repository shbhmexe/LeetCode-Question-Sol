class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int , int> mp;
        mp[0] = 1;
        int preSum = 0 , cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            preSum += nums[i];
            int remove = preSum - k;
            cnt+= mp[remove];
            mp[preSum]+= 1;
        }
        return cnt;
    }
};