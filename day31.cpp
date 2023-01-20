//Qlink-> https://leetcode.com/problems/reverse-words-in-a-string/description/
//Code->

string reverseWords(string s) {
        stack<string> ss;
        string p;
        for(int i=0;i<s.length();)
        {
            if(s[i]==' ')
            {
                i++; 
                continue;
            }
            p="";
            while(i<s.length() && s[i]!=' ')
            {
                p=p+s[i];
                i++;
            }
            ss.push(p);
        }
        p="";
        while(!ss.empty())
        {
            p=p+ss.top();
            ss.pop();
            if(ss.size()!=0)
            {
                p=p+" ";
            }
        }
        
    return p;
    }
