//Qlink-> https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> v;
        for(int i =0;i<boxes.size();i++)
        {
            int  count = 0;
            for(int j = 0;j<boxes.size();j++)
            {
                if((int(boxes[j])- 48) == 1)
                {
                    count = count + abs(j-i);
                }
            }
            v.push_back(count);
        }
        
        return v;
        
        
    }
};
