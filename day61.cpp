//Qlink-> https://leetcode.com/problems/minimum-impossible-or/
//Code

int minImpossibleOR(vector<int>& nums) {
        unordered_set <int> s;
        for(auto &i:nums)
        {
            s.insert(i);
        }
        for(int i=0;i<=32;i++)
        {
            long long num = pow(2,i);
            if(s.find(num)==s.end())
            {
                return num;
            }
        }
        return -1;
    }
