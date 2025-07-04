#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // Exclude
        solve(nums, output, index + 1, ans);

        // Include
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);

        // Backtrack
        output.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = obj.subsets(nums);

    cout << "All Subsets:\n";
    for (auto subset : res) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
    return 0;
}



// class Solution {
// private:
//     void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
//         // Base case
//         if (index >= nums.size()) {
//             ans.push_back(output);
//             return;
//         }

//         // Exclude
//         solve(nums, output, index + 1, ans);

//         // Include
//         output.push_back(nums[index]);
//         solve(nums, output, index + 1, ans);

//         // Backtrack
//         output.pop_back();
//     }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };