//Question 532
//Simple Approach - Keeping track of prev diff
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();

        long long result = 0;

        int curr = 0;
        int prev = 0;

        for(int i = 0; i < n; i++) {
            curr = target[i] - nums[i];

            //sign change ?
            if((curr > 0 && prev < 0) || (curr < 0 && prev > 0)) {
                result += abs(curr);
            } else if(abs(curr) > abs(prev)) {
                result += abs(curr - prev);
            }

            prev = curr;
        }

        return result;
    }
};
