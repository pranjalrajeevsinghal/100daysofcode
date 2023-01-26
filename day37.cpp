//Qlink-> https://leetcode.com/problems/optimal-partition-of-string/submissions/885714690/
//Code

    int partitionString(string s) {
        map<char,int>mp;
        int ans=0;
        for(char ch:s)
        {
            if(mp.find(ch)!=mp.end())
            {
                ans+=1;
                mp.clear();
            }
            mp[ch]++;
        }
        ans+=1;
        return ans;
    }
