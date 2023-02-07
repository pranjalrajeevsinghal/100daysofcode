//Qlink-> https://leetcode.com/problems/first-missing-positive/
//Code-
int firstMissingPositive(vector<int>& nums) {
        set <int> s;
        for(auto &i:nums)
        {
            if(i>0)
            {
                s.insert(i);
            }
        }
        nums.clear();
        for(auto &i:s)
        {
            nums.push_back(i);
        }
        map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                m[nums[i]]=nums[i];
            }
            else
            {
                m[nums[i]] = i+1;
            }
        }
        int ans = 1;
        for(auto &i:m)
        {
            if(i.first != i.second)
            {
                ans = i.second;
                break;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
