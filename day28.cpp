//QLink-> https://leetcode.com/problems/flip-string-to-monotone-increasing/description/
//Code

int minFlipsMonoIncr(string s) {
        int countone=0;
        int countflip=0;
        for(auto x:s)
        {
            if(x=='1')
            {
                countone++;
            }
            else
            {
                countflip++;
                countflip = min(countflip, countone);
            }
        }
        return countflip;
    }
