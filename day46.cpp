//Qlink-> https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
//Code-

int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector <int> v;
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
