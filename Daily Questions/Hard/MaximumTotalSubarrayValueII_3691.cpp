//Questoon 19  june26
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLog = 32 - __builtin_clz(n);
        vector<vector<int>> fMax(n, vector<int>(maxLog));
        vector<vector<int>> fMin(n, vector<int>(maxLog));
        vector<int> lg(n + 1, 0);
        
        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i >> 1] + 1;
        }
        
        for (int i = 0; i < n; i++) {
            fMax[i][0] = nums[i];
            fMin[i][0] = nums[i];
        }
        
        for (int j = 1; j < maxLog; j++) {
            for (int i = 0; i <= n - (1 << j); i++) {
                fMax[i][j] = max(fMax[i][j - 1], fMax[i + (1 << (j - 1))][j - 1]);
                fMin[i][j] = min(fMin[i][j - 1], fMin[i + (1 << (j - 1))][j - 1]);
            }
        }
        
        auto query_max = [&](int l, int r) {
            int g = lg[r - l + 1];
            return max(fMax[l][g], fMax[r - (1 << g) + 1][g]);
        };
        
        auto query_min = [&](int l, int r) {
            int g = lg[r - l + 1];
            return min(fMin[l][g], fMin[r - (1 << g) + 1][g]);
        };
        
        priority_queue<pair<long long, pair<int, int>>> pq;
        for (int i = 0; i < n; i++) {
            long long val = query_max(i, n - 1) - query_min(i, n - 1);
            pq.push({val, {i, n - 1}});
        }
        
        long long shbhm = 0;
        for (int exe = 0; exe < k; exe++) {
            auto top = pq.top();
            pq.pop();
            long long val = top.first;
            int l = top.second.first;
            int r = top.second.second;
            shbhm += val;
            if (r > l) {
                long long nextVal = query_max(l, r - 1) - query_min(l, r - 1);
                pq.push({nextVal, {l, r - 1}});
            }
        }
        
        return shbhm;
    }
};