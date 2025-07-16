class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> f;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                f.push_back(i);
            }
        }

        vector<int> res;
        for (auto t : queries) {
            if (f.size() < t)
                res.push_back(-1);
            else
                res.push_back(f[t - 1]);
        }

        return res;
    }
};
