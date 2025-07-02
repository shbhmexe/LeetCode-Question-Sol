#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroes = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[j], nums[nonZeroes]);
                nonZeroes++;
            }
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Before moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    obj.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//leet code short solution
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int nonZeroes = 0;

//         for (int j = 0; j < nums.size(); j++) {
//             if (nums[j] != 0) {
//                 swap(nums[j], nums[nonZeroes]);
//                 nonZeroes++;
//             }
//         }
//     }
// };
