// //Question 216

// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int start = 0;
//         int end = 0;
//         set<int> s;
//         int sum = 0;
//         int ans = 0;

//         while (end < nums.size()) {
//             while (start < end && s.find(nums[end]) != s.end()) {
//                 s.erase(nums[start]);
//                 sum -= nums[start++];
//             }

//             s.insert(nums[end]);
//             sum += nums[end++];
//             ans = max(ans, sum);
//         }

//         return ans;
//     }
// };



class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> freq;
        int start = 0, sum = 0, ans = 0;

        for (int end = 0; end < nums.size(); end++) {
            freq[nums[end]]++;
            sum += nums[end];

            // Shrink window until all elements are unique
            while (freq[nums[end]] > 1) {
                freq[nums[start]]--;
                sum -= nums[start];
                start++;
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};
