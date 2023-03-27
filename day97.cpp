//Qlink-> https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/description/
//Code

class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m;
        for(int i=0;i<num.size();i++)
        {
            m[i]=0;
        }
        for(int i=0;i<num.size();i++)
        {
            int a = num[i]-'0';
            m[a]++;
        }
        string s = "";
        for(auto &i:m)
        {
            s = s+to_string(i.second);
        }
        if(s==num)
        {
            return true;
        }

        return false;
    }
};
