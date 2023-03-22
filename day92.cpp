//Qlink-> https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
//Code-

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count1 = 0;
        int count2 = 0;
        for(int i = 0;i<n;i++)
        {
            if(i<n/2 && (s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'))
            {
                count1++;
            }
            
            if(i>=n/2 && (s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'))
            {
                count2++;
            }
            
        }
        
        if(count1 == count2)
        {
            return true;
        }
        return false;
        
        
    }
};
