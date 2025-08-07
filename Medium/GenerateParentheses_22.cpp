//Question 336
// //Approach-1 (Simple Recursion)
// //T.C : O(2n* (2^(2n)) -> Removing constant -> O(n * (2^n))
// //S.C : O(2*n) -> Removing constant -> O(n) -> recursion stack space - Max depth of recusion tree
// class Solution {
// public:
//     vector<string> result;

//     bool isValid(string str) {
//         int count = 0;

//         for(char ch:str) {
//             if(ch == '(')
//                 count++;
//             else
//                 count--;
//             if(count < 0)
//                 return false;
//         }
//         return count==0;
//     }

//     void solve(string& curr, int n) {
//         if(curr.length() == 2*n) {
//             if(isValid(curr)) {
//                 result.push_back(curr);
//             }
//             return;
//         }

//         curr.push_back('(');
//         solve(curr, n);
//         curr.pop_back();

//         curr.push_back(')');
//         solve(curr, n);
//         curr.pop_back();
//     }

//     vector<string> generateParenthesis(int n) {
//         string curr = "";

//         solve(curr, n);

//         return result;
//     }
// };

//Approach-2 (Smart Recursion)
//T.C : O(2^n)
//S.C : O(2*n) -> Removing constant -> O(n) -> recursion stack space - Max depth of recusion tree
class Solution {
public:
    vector<string> result;

    void solve(int n, string curr, int open, int close) {
        if(curr.length() == 2*n) {
            result.push_back(curr);
            return;
        }
        
        if(open < n) {
            curr.push_back('(');
            solve(n, curr, open+1, close);
            curr.pop_back();
        }
        if(close < open) {
            curr.push_back(')');
            solve(n, curr, open, close+1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(n, curr, 0, 0);

        return result;
    }
};
