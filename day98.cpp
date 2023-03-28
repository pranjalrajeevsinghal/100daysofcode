//Qlink-> https://leetcode.com/problems/k-items-with-the-maximum-sum/description/
//Code
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector <int> v;
        while(numOnes--)
        {
            v.push_back(1);
        }
        while(numZeros--)
        {
            v.push_back(0);
        }
        while(numNegOnes--)
        {
            v.push_back(-1);
        }
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum = sum+v[i];
        }
        return sum;

    }
};
