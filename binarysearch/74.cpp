//Treat the 2D array as a 1D array. matrix[index / cols][index % cols]
#include <vector>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int l = 0;
        int r = matrix.size() * matrix[0].size();
        const int col = matrix[0].size();
        while(l < r) {
            const int m = l + (r - l) / 2;
            if (matrix[m/col][m%col] == target){

                return true;
            }
            else if (matrix[m/col][m%col] > target){
                r = m;
            }
            else {
                l = m + 1;
            }
        }
        return false;
    }
};