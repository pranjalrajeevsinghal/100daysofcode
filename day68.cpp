//Qlink-> https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/
//Code
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int maxi = -1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i+1]-s[i]==1)
            {
                count++;
            }
            else
            {
                maxi = max(maxi,count);
                count=1;
            }
        }
        return max(maxi,count);
    }
};
