 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        bool isFirstRowContainsZero = false;
        bool isFirstColContainsZero = false;
        
        for(int i = 0 ; i < n ; i++){
            if(matrix[i][0] == 0){
                isFirstColContainsZero = true;
                break;
            }
        }
        
        for(int j = 0 ; j < m ; j++){
            if(matrix[0][j] == 0){
                isFirstRowContainsZero = true;
                break;
            }
        }
        
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    break;
                }
            }
        }
        
        for(int j = 1 ; j < m ; j++){
            for(int i = 1 ; i < n ; i++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    break;
                }
            }
        }
        
        for(int i = 1 ; i < n ; i++){
            if(matrix[i][0] == 0){
                for(int j = 1 ; j < m ; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int j = 1 ; j < m ; j++){
            if(matrix[0][j] == 0){
                for(int i = 1 ; i < n ; i++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(isFirstRowContainsZero){
            for(int j = 0 ; j < m ; j++){
                matrix[0][j] = 0;
            }
        }
        
        if(isFirstColContainsZero){
            for(int i = 0 ; i < n ; i++){
                matrix[i][0] = 0;
            }
        }
        
    }
};