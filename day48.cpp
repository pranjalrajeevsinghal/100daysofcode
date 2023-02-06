//Qlink-> https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
//Code-

vector<int> findAnagrams(string s, string p) {
        
        map <char,int> m1;
        map <char,int> m2;
        for(auto &i:p)
        {
            m1[i]++;
        }
        for(int i=0;i<p.size();i++)
        {
            m2[s[i]]++;
        }

        vector <int> ans;
        if(m1==m2)
        {
            ans.push_back(0);
        }
        for(int i=p.size();i<s.size();i++)
        {
            m2[s[i]]++;
            m2[s[i-p.size()]]--;
            if(m2[s[i-p.size()]] == 0)
            {
                m2.erase(m2.find(s[i-p.size()]));
            }
            if(m1==m2)
            {
                ans.push_back(i-p.size()+1);
            }
        }

        return ans;
    }
