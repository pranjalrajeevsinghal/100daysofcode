//Qlink-> https://leetcode.com/problems/rearrange-array-to-maximize-prefix-score/
//Code

class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(), greater <int> ());
        vector <long long> v(nums.size(),0);
        v[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]+nums[i];
        }
        int count = 0;
        for(auto &i:v)
        {
            if(i>0)
            {
                count++;
            }
        }
        return count;
    }
};
