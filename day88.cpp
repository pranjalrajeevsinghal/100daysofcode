//Qlink-> https://leetcode.com/problems/maximize-greatness-of-an-array/description/
//Code-

class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n=nums.size();
        int ans=0;
    
        for(int k=1;k<n;k++)
        {
            if(nums[i] < nums[k])
            {
                ans++;
                i++;
            }
        }
        return ans;
    }
};
