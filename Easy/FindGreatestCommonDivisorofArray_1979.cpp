//Question 7 2026
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < smallest){
                smallest = nums[i];
            }
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        int ans = 1;

        for(int i = 1; i <= smallest; i++){
            if(smallest % i == 0 && largest % i == 0){
                ans = i;
            }

        }
        return ans;
    }
};