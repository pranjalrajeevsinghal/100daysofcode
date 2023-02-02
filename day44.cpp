//Qlink-> https://leetcode.com/problems/product-of-array-except-self/description/
//Code

vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int count0 = 0;
        for(auto &i:nums)
        {
            if(i==0)
            {
                count0++;
            }
            product = product * i;
        }    
        vector <int> v(nums.size(),product);
        int product0 = 1;
        int n = nums.size();
        if(count0 == 1)
        {
            for(auto &i:nums)
            {
                if(i!=0)
                {
                    product0 = product0 *i;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(nums[i]!=0)
                {
                    v[i] = v[i]/nums[i];
                }
                else
                {
                    v[i] = product0;
                }
            }

            return v;
        }
        else if(count0>1)
        {
            return v;
        }

        for(int i=0;i<n;i++)
        {
            v[i] = v[i]/nums[i];
                
        }

        return v;
    }
