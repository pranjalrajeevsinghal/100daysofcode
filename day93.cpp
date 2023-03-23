//Qlink-> https://leetcode.com/problems/array-partition/description/
//Code

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int* buckets = new int[20001] {0};
        
        for(auto n : nums) {
            ++buckets[n + 10000];
        }
        
        int sum = 0;
        
        for(int i = 0, used = 0; used < nums.size();) {
            if(buckets[i] == 0) {
                ++i;
            } else {
                if(used % 2 == 0)
                    sum += (i - 10000);
                
                --buckets[i];
                ++used;
            }
        }
        
        return sum;
    }
};
