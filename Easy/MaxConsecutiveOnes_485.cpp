//Question 47 june26
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int newCnt = 0;
        int oldCnt = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                newCnt += nums[i];
            }
            else{
                newCnt = 0;
            }
            oldCnt = max(oldCnt, newCnt);
        }
        return oldCnt;
    }
};