#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
        // Base case: store permutation
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);      // Fix one element
            solve(nums, ans, index + 1);     // Recursion

            swap(nums[index], nums[i]);      // Backtrack
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> res = obj.permute(nums);

    cout << "All Permutations:" << endl;
    for (auto& perm : res) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


// class Solution {
// private: 
//     void solve(vector<int> nums, vector<vector<int>> &ans, int index){
//         if(index >= nums.size()){
//             ans.push_back(nums);
//             return;
//         }
//         for(int i = index; i < nums.size(); i++){
//             swap(nums[index], nums[i]);
//             solve(nums, ans , index + 1);

//             //backtrack
//             swap(nums[index], nums[i]);
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         int index = 0;
//         vector<vector<int>> ans;
//         solve(nums, ans, index);
//         return ans;
        
//     }
// };