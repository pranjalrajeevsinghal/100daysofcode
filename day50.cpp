//QLink-> https://leetcode.com/problems/valid-perfect-square/
//Code-
bool isPerfectSquare(int num) {
        if(num==1)
        {
            return true;
        }
        long long s = 1;
        for(long long i=1;i<=num/2;i++)
        {
            s = i*i;
            if(s== num)
            {
                return true;
            }
        }

        return false;
        
    }

//Qlink-> https://leetcode.com/problems/count-pairs-of-similar-strings/description/
//Code-
int similarPairs(vector<string>& words) {
        map<set<int> , int> mp;
        for(auto s:words)
        {
            set<int> st;
            for(char c:s)
            {
                st.insert(c);
            }
            mp[st]++;
        }
        int res=0;
        for(auto p:mp)
        {
            if(p.second>1)
            {
                int n=p.second;
                res = res + (n*(n-1))/2;
            }
        }
        return res;
    }

//Qlink-> https://leetcode.com/problems/find-peak-element/description/
//Code-
int findPeakElement(vector<int>& nums) {
        int maxi = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return i;
            }
        }

        return (nums.size()-1);
        
        
    }
