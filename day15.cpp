// Qlink->  https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/
// Code->

int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> m;
        for(auto &i:tasks)
        {
            m[i]++;
        }
        int count = 0;
        for(auto i:m)
        {
            if(i.second == 1)
            {
                count = -1;
                break;
            }
            int rem = i.second%3;
            count = count + (i.second/3) + (rem/2) + (rem%2);
        }

        return count;
    }
