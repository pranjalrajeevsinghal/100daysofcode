// Qlink-> https://leetcode.com/problems/k-radius-subarray-averages/description/
// Code-
 vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> res;
        int totalNo = (2*k+1);
        long long prefix[n];
        prefix[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i] = prefix[i-1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if((i<k) || (i>n-k-1))
            {
                res.push_back(-1);
            }
            else
            {
                if((i-k-1)<0)
                {
                    res.push_back(prefix[i+k]/totalNo);
                }
                else
                {
                    res.push_back((prefix[i+k]-prefix[i-k-1])/totalNo);
                }
            }
        }
        return res;
    }
