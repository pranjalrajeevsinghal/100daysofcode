//Qlink-> https://leetcode.com/problems/number-of-even-and-odd-bits/
//Code

class Solution {
public:
    vector<int> evenOddBit(int n) {
        string binary = "";
        while(n!=0)
        {
            int rem = n%2;
            binary = binary + to_string(rem);
            n = n/2;
        }
        vector <int> ans(2,0);
        int countodd = 0;
        int counteven = 0;
        for(int i=0;i<binary.size();i++)
        {
            if((i%2==0) && (binary[i]=='1'))
            {
                counteven++;
            }
            else if((i%2!=0) && (binary[i]=='1'))
            {
                countodd++;
            }
        }
        ans[0] = counteven;
        ans[1] = countodd;
        return ans;
    }
};
