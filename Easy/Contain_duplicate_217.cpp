// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {

//         //T.C ---> O(n^2)
//         // int n = nums.size();

//         // for (int i = 0; i < n - 1; i++) {
//         //     for (int j = i + 1; j < n; j++) {
//         //         if (nums[i] == nums[j]) {
//         //             return true; // Duplicate found
//         //         }
//         //     }
//         // }

//         // return false; // No duplicates

//          //T.C ---> O(n)   
//          unordered_map<int, int> freq;

//         for (int num : nums) {
//             freq[num]++;
//             if (freq[num] > 1) {
//                 return true; // Duplicate found
//             }
//         }

//         return false; // No duplicates
//     }
    
// };

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 1) {
                return true; // Duplicate found
            }
        }

        return false; // No duplicates
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5, 2};

    if (obj.containsDuplicate(nums)) {
        cout << "Duplicate Found" << endl;
    } else {
        cout << "No Duplicates" << endl;
    }

    return 0;
}
