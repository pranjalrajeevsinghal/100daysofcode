//Qlink->  https://leetcode.com/problems/search-a-2d-matrix/description/
//Code

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=matrix[0].size()-1;
        while(l<matrix.size() and h>=0)
        {
            if(matrix[l][h]==target)
            {
                return true;
            }
            else if(matrix[l][h]>target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
        return false;
        
    }
