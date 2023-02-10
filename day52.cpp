//Qlink-> https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
//Code

string removeOccurrences(string s, string part) {
        while(true)
        {
            if(s.find(part)!=string::npos)
            {
                s.erase(s.find(part), part.size());
            }
            else
            {
                break;
            }
        }
        return s;
    }
