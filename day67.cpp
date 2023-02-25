//Qlink-> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Code
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int mini = 55555;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,prices[i]);
            maxi = max(maxi,prices[i]-mini);
        }
        return maxi;;
        
    }
};
