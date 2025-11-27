//Question 586
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long prefixSum = 0;
        vector<long long> minPrefixSum(k, LLONG_MAX);

        minPrefixSum[k - 1] = 0;

        long long maxSum = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int remainder = i % k;

            if (i >= k) {
                maxSum = max(maxSum, prefixSum - minPrefixSum[remainder]);
            } else if (i == k - 1) {
                maxSum = max(maxSum, prefixSum);
            }

            minPrefixSum[remainder] = min(minPrefixSum[remainder], prefixSum);
        }

        return maxSum;
    }
};
