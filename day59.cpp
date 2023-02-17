//Qlink-> https://leetcode.com/problems/isomorphic-strings/
//Code
bool isIsomorphic(string s, string t) {
        unordered_map <char,char> m;
        bool ans = true;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else
            {
                m[s[i]] = t[i];
            }
        }
        unordered_map <char,char> m1;
        for(int i=0;i<s.size();i++)
        {
            if(m1.find(t[i])!=m1.end())
            {
                if(m1[t[i]]!=s[i])
                {
                    return false;
                }
            }
            else
            {
                m1[t[i]] = s[i];
            }
        }
        
        return ans;
    }
