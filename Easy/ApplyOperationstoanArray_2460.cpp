#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int nz = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i < n - 1 && nums[i] != 0 && nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }

            if (nums[i] != 0) {
                if (i != nz) {
                    swap(nums[i], nums[nz]);
                }
                nz++;
            }
        }

        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 2, 1, 1, 0};

    cout << "Before: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> result = obj.applyOperations(nums);

    cout << "After: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}





// class Solution {
// public:
//     vector<int> applyOperations(vector<int>& nums) {
//         int nz=0;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(i < n-1 && nums[i]!=0  && nums[i]==nums[i+1]){
//                 nums[i]*=2;
//                 nums[i+1]=0;
//             }
//             if(nums[i]!=0){
//                 if(i!=nz){
//                     swap(nums[i] , nums[nz]);
//                 }
//                 nz++;
//             }
//         }
//         return nums;
//     }
// };