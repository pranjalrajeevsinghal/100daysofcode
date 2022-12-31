// Qlink-> https://leetcode.com/problems/maximum-subarray/description/
//Code

int maxSubArray(vector<int>& nums) {
        int curSum = 0;
        int maximum = INT_MIN;
        for(auto i : nums)
        {
            curSum = max(i, curSum + i);
            maximum = max(maximum, curSum);
        }
        return maximum;
    }
