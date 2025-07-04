#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            int start = 0, end = n - 1;
            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
        
//         // step 1 : transpose of matrix
//         for (int i=0; i<n-1; i++) {
//             for (int j=i+1; j<n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // step 2 : reverse each row
//         for (int i=0; i<n; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };