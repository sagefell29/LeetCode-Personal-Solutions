class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size()-1,i=0;
        while (i<r && c>-1)
        {
            if (matrix[i][c]==target) return true;
            else if (matrix[i][c]>target) c--;
            else if (matrix[i][c]<target) i++;        
        }
        return false;
        
    }
};