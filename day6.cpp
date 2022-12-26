// Qlink -> https://leetcode.com/problems/sorting-the-sentence/description/
// Code-

string sortSentence(string s) {
    string p = "";
    vector <string> v;
        for(int  i= 0;i<s.size();i++)
        {
            
            if(s[i] != ' ')
            {
                p=p+s[i];
            }
            else
            {
                v.push_back(p);
                p = "";
            }
        }
        v.push_back(p);
        map <char,string> m;
        for(int i = 0;i<v.size();i++)
        {
            char c = v[i][(v[i].size())-1];
            m[c] = v[i];
        }

        string ans= "";

        for(auto i:m)
        {
            ans = ans+i.second;
        }

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>'0' && ans[i]<='9')
            {
                ans[i] = ' ';
            }
        }
        ans.pop_back();

        return ans;
        
    }
