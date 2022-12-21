// Qlink->  https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
// Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
//Code-

int maxProduct(vector<int>& nums)                  //  Required function to implement the given condition
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maximum = 0;
        
        for(int i=0;i<n-1;i++)
        {
            int product = 1;
            product = (nums[i]-1)*(nums[i+1]-1);
            maxi = max(maxi,product);
        }
        
        return maximum;
    }
