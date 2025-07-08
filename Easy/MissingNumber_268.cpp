class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        // XOR all elements in the array and also XOR with all indices
        for(int i = 0; i < n; i++){
            ans ^= nums[i];  // XOR with array element
            ans ^= i;        // XOR with index
        }

        // Finally XOR with 'n' as indices run from 0 to n, but one number is missing
        ans ^= n;

        return ans;
    }
};
