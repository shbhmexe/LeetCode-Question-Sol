#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k > n

        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        // Copy temp back to nums
        nums = temp;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Before Rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    obj.rotate(nums, k);

    cout << "After Rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i = 0; i<nums.size(); i++){
//             temp[(i+k) % nums.size()] = nums[i];
//         }
//         //copy into nums vector
//         nums = temp;
        
//     }
// };