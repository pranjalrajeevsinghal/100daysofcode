//Qlink-> https://leetcode.com/problems/smallest-missing-non-negative-integer-after-operations/description/
//Code

class Solution {
public:
    int findSmallestInteger(vector<int>& v, int val) {
        vector<int>p(val);
        for(int i=0;i<v.size();i++)
        {
            long long int t=v[i]+(1e8*val);
            p[t%val]++;
        }
        int ct=0;
        while(1)
        {    
            for(int i=0;i<val;i++)
            {
                if(p[i]==0)
                {
                    return ct;
                }
                ct++;
                p[i]--;
            }
        }
        return 0;
    }
};
