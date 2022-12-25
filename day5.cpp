// Qlink-> https://leetcode.com/problems/length-of-last-word/solutions/2944846/my-solution-in-c-beats-100-time-complexity/
//code-

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int majorityElement=0;
        for(auto i:m)
        {
            if(i.second>(n/2))
            {
                majorityElement = i.first;
            }
        }

        return majorityElement;
        
    }
