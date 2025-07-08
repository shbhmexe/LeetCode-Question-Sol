class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0; // To store the XOR of all elements
        
        // XOR of all elements in the array
        for(int i = 0; i < nums.size(); i++){
            XOR = XOR ^ nums[i];
        }

        // The result is the element that appears only once
        return XOR;
    }
};
