//Qlink-> https://leetcode.com/problems/split-with-minimum-sum/description/
//Code
class Solution {
public:
    int splitNum(int nums) {
        string str=to_string(nums);
        string x="",y="";
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
        {
            if(i%2==0) x+=str[i];
            else y+=str[i];
        }
        int n=str.size();
        return stoi(x)+stoi(y);
    }
};
