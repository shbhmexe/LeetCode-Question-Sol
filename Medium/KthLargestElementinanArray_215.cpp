//Approach-1 Using Min-heap (T.C : n*logn)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //min heap
        priority_queue<int, vector<int>, greater<int>> minh;
        
        for(int i:nums) {
            minh.push(i);
            if(minh.size() > k)
                minh.pop();
        }
        
        return minh.top();
    }
};


// //Approach-2 Using sorting (T.C : n*logn)
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(begin(nums), end(nums), greater<int>());
//         return nums[k - 1];
//     }
// };
