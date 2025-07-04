#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];

            if (element == target) {
                return true;
            }
            if (element < target) {
                rowIndex++;
            } else {
                colIndex--;
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {8, 9, 10, 20},
        {11, 12, 17, 30}
    };

    int target = 10;

    if (obj.searchMatrix(matrix, target)) {
        cout << "Target Found!" << endl;
    } else {
        cout << "Target Not Found!" << endl;
    }

    return 0;
}


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col - 1;

//         int start = 0, end = row * col - 1;

//         while(rowIndex < row && colIndex >= 0){
//             int element = matrix[rowIndex][colIndex];
//             if(element == target){
//                 return 1;
//             }
//             if(element < target ){
//                 rowIndex++;
//             }
//             else{
//                 colIndex--;
//             }
//         }
//         return 0;

//     }
// };