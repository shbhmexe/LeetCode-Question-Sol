//Question 43 june26
class Solution {
public:
    static bool customCompare(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string>sh;
        
        for(int i = 0; i < nums.size(); i++){
            sh.push_back(to_string(nums[i]));
        }

        sort(sh.begin(), sh.end(), customCompare);

        if (sh[0] == "0") {
            return "0";
        }

        // Step 5: Glue them together
        string ans = "";
        for (int i = 0; i < sh.size(); i++) {
            ans += sh[i];
        }

        return ans;
    }
};