//QLink-> https://leetcode.com/problems/add-to-array-form-of-integer/
//Code

vector<int> addToArrayForm(vector<int>& num, int k) {
        string num1 = "";
        string num2 = to_string(k);
        for(auto &i:num)
        {
            num1 = num1+to_string(i);
        }
        int s1 = num1.size();
        int s2 = num2.size();
        if(s1>s2)
        {
            for(int i=0;i<(s1-s2);i++)
            {
                num2 = '0'+num2;
            }
        }
        if(s2>s1)
        {
            for(int i=0;i<(s2-s1);i++)
            {
                num1 = '0'+num1;
            }
        }
        s1 = num1.size();
        string ans="";
        int carry = 0;
        for(int i=s1-1;i>=0;i--)
        {
            int sum = (num1[i]-'0')+(num2[i]-'0')+carry;
            ans = to_string(sum%10)+ans;
            carry = sum/10;
        }
        if(carry>0)
            ans = to_string(carry)+ans;
        vector <int> answer;
        for(auto &i:ans)
        {
            answer.push_back(i-'0');
        }
        return answer;
    }
