//Qlink-> https://leetcode.com/problems/create-target-array-in-the-given-order/description/
//Code-

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for(int i=0;i<index.size();++i)
        {
            result.insert(result.begin()+index[i],nums[i]);
        }
        return result;
        
    }
