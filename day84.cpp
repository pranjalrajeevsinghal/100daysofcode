//Qlink-> https://leetcode.com/problems/make-the-string-great/
//Code

class Solution {
public:
    string makeGood(string s) {
         
        stack<char>st ;
        string res;
        for(int i=0;i<s.size();i++)
        {
          if(!st.empty() && abs(st.top()-s[i])==32)
          {
              st.pop();
          }
          else
          {
             st.push(s[i]);
          }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res ;
    }

};
