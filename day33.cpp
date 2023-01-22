//Qlink-> https://leetcode.com/problems/sort-an-array/description/
//Code

vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        priority_queue <int> pq;
        for(auto &i:nums)
        {
            pq.push(i);
        }

        vector <int> v(n);
        for(int i=n-1;i>=0;i--)
        {
            v[i] = pq.top();
            pq.pop();
        }

        return v;
    }
