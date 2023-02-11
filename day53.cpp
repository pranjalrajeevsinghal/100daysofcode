//Qlink-> https://leetcode.com/problems/check-if-a-string-can-break-another-string/description/
//Code-

bool checkIfCanBreak(string s1, string s2) {
        vector <char> v1;
        vector <char> v2;
        for(auto &i:s1)
        {
            v1.push_back(i);
        }
        for(auto &i:s2)
        {
            v2.push_back(i);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        bool ans= true;
        for(int i=0;i<v1.size();i++)
        {
            if(v2[i]<v1[i])
            {
                ans =  false;
            }
        }
        if(ans == false)
        {
        for(int i=0;i<v1.size();i++)
        {
            if(v2[i]<=v1[i])
            {
                ans =  true;
            }
            else
            {
                ans = false;
                break;
            }
        }
        }
        return ans;
    }
