// Qlink->  https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
// Code

vector<int> findArray(vector<int>& pref) {
        vector <int> res;
        int prefix = pref[0];
        res.push_back(prefix);
        int n = pref.size();
        for(int i=1;i<n;i++)
        {
            prefix = pref[i] ^ pref[i-1];
            res.push_back(prefix);
        }
        
        return res;
        
    }
