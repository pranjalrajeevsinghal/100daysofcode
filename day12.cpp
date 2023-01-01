//Qlink-> https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/description/
// Code

int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> s;          
        for(int i=0;i<nums.size();i++)    
        {
            int n = nums[i];      
            int c=2;
            while(n>1)
            {
                if(n%c==0){
                s.insert(c);
                n/=c;
                }
                else c++;
            }
        }

        return s.size();
    }
