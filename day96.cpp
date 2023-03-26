//Qlink-> https://leetcode.com/problems/reverse-prefix-of-word/description/
//Code

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int key = -1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i] == ch)
            {
                key = i;
                break;
            }
        }
        int start = 0;
        if(key == -1 || key == 0)
        {
            return word;
        }
        else
        {
            while(start<key)
            {
                swap(word[start],word[key]);
                start++;
                key--;
            }
        }

        return word;

        
    }
};
