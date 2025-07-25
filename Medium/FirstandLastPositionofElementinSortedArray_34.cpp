// class Solution {
// public:
    
//     //Approach-2
//     vector<int> search_stl(vector<int>& nums, int target) {
//         //first element equal to or greater than target
//         int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        
//         //first element greater than target
//         int r = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
//         //Why do we need this (nums[l] != target) ? 
//         //Because lower_bound returns first element which is equal or GREATER THAN target.
//         //So, in case the target is not in the list, it will return first greater element than target which will be wrong
//         if(l == nums.size() || nums[l] != target)
//             return {-1, -1};
        
//         return {l, r-1};
//     }
    
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         return search_stl(nums, target); //Approach - 2
//     }
// };

//Approach-1 (Using Two Custom Binary Search)
//T.C : O(nlogn)
class Solution {
public:
    int find_first_position(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int result = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                result = mid; //possibly my answer
                r = mid-1;     //but lets look at left more
            } else if(nums[mid] > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }
    
    int find_last_position(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int result = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                result = mid; //possibly my answer
                l = mid+1;   //but lets look at right more
            } else if(nums[mid] > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l = find_first_position(nums, target);
        int r = find_last_position(nums, target);
        
        return {l, r};
    }
};

