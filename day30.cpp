//Qlink-> https://leetcode.com/problems/subarray-sum-equals-k/description/
//Code->

int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        int n = nums.size();
        int sum = 0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+nums[i];
            if(sum == k)
            {
                count++;
            }
            if(m.find(sum-k)!=m.end())
            {
                count = count+m[sum-k];
            }

            m[sum]++;
        }
        return count;
    }

//Qlink-> https://leetcode.com/problems/top-k-frequent-elements/description/
//Code->

vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> v;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            int maxi = 0;
            int a = -300001;
            for(auto j:m)
            {
                if(j.second>maxi)
                {
                    maxi=j.second;
                    a = j.first;
                }
            }
            v.push_back(a);
            m.erase(a);
        }
        return v;
    }
