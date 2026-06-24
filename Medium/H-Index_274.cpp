//Question 74 jun26
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = 0;
        int n = citations.size();
        sort(citations.rbegin(), citations.rend());

        for(int i = 0; i < n; i++){
            if(citations[i] >= (i + 1)){
                ans = (i + 1);
            }
        }
        return ans;
    }
};