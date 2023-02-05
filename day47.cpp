//Qlink-> https://leetcode.com/problems/count-vowel-strings-in-ranges/description/
//Code

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
        vector <int> v;
        for(int j=0;j<words.size();j++)
        {
            int s = words[j].size();
            if((words[j][0] == 'a'|| words[j][0] == 'e' || words[j][0] == 'i' || words[j][0] == 'o' || words[j][0] == 'u') && (words[j][s-1] == 'a'|| words[j][s-1] == 'e' || words[j][s-1] == 'i' || words[j][s-1] == 'o' || words[j][s-1] == 'u'))
                {
                    v.push_back(1);
                }
            else
            {
                v.push_back(0);
            }
        }
        vector <int> prearr(v.size(),0);
        prearr[0] = v[0];
        vector <int> ans;
        for(int i=1;i<v.size();i++)
        {
            prearr[i] = prearr[i-1]+v[i];
        }
        for(int i=0;i<q.size();i++)
        {
            if(q[i][0] == 0)
            {
                ans.push_back(prearr[q[i][1]]);
            }
            else
            {
                ans.push_back(prearr[q[i][1]]-prearr[q[i][0]-1]);
            }
        }
        return ans;
    }
