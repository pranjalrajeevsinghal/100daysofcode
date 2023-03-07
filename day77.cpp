//Qlink-> https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
//COde

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(auto &i:arr)
        {
            m[i]++;
        }
        vector <int> p;
        for(auto &i:m)
        {
            p.push_back(i.second);
        }
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();i++)
        {
            if(k>=p[i])
            {
                k = k-p[i];
                p[i]=0;
                
            }
        }
        int count = 0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]!=0)
            {
                count++;
            }
        }
        return count;
    }

    
};
