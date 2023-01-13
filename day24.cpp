//Qlink-> https://leetcode.com/problems/kth-largest-element-in-an-array/description/
//Code

int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int> pq;
        int n = nums.size();
        for(auto &i:nums)
        {
            pq.push(i);
        }
        int ans = 0;
        for(int i=0;i<k-1;i++)
        {
            pq.pop();
        }
        return pq.top();
    }
