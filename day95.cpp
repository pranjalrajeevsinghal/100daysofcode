//Qlink-> https://leetcode.com/problems/counting-words-with-a-given-prefix/description/
//Code

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = pref.size();
        int count = 0;
        for(int i=0;i<words.size();i++)
        {
            if(words[i].substr(0,len)==pref)
            {
                count++;
            }
        }

        return count;
    }
};
