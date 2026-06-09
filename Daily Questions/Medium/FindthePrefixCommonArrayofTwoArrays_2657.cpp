//Question 779
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = B.size();
        int count = 0;
        vector<int> freq(n + 1, 0);
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            freq[A[i]] = freq[A[i]] + 1;

            if (freq[A[i]] == 2) count = count + 1;

            freq[B[i]] = freq[B[i]] + 1;

            if (freq[B[i]] == 2) count = count + 1;

            ans[i] = count;
        }
        return ans;
    }
};