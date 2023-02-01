//Qlink-> https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/
//Code-
long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int start = 0;
        int n = skill.size();
        int sum = skill[start]+skill[n-1];
        long long ans = skill[start]*skill[n-1];
        for(int i=1;i<n/2;i++)
        {
            if(sum != skill[i]+skill[n-i-1])
            {
                return -1;
            }
            else
            {
                ans = ans + (skill[i]*skill[n-i-1]);
            }
        }
        return ans;
    }
