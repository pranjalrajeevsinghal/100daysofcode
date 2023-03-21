//Qlink-> https://leetcode.com/problems/number-of-zero-filled-subarrays/
//Code

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        nums.push_back(1);
        long long count0 = 0;
        long long ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count0++;
            }
            else
            {
                ans = ans + ((count0*(count0+1))/2);
                count0 = 0;
            }
        }
        return ans;

    }
};
