//Qlink-> https://leetcode.com/problems/add-binary/
//Code-

string addBinary(string a, string b) {
        int n1 = a.size();
        int n2 = b.size();
        if(n1>n2)
        {
            for(int i=0;i<n1-n2;i++)
            {
                b = '0'+b;
            }
        }
        if(n1<n2)
        {
            for(int i=0;i<n2-n1;i++)
            {
                a = '0'+a;
            }
        }
        n1 = a.size();
        char carry = '0';
        string s = "";
        for(int i=n1-1;i>=0;i--)
        {
            if((a[i] == '1' && b[i]=='0' && carry=='0') || (a[i] == '0' && b[i]=='1' && carry=='0') || (a[i] == '0' && b[i]=='0' && carry=='1'))
            {
                s = '1'+s;
                carry='0';
            }
            else if((a[i] == '1' && b[i]=='1' && carry=='0') || (a[i] == '0' && b[i]=='1' && carry=='1') || (a[i] == '1' && b[i]=='0' && carry=='1'))
            {
                s = '0'+s;
                carry = '1';
            }
            else if(a[i] == '1' && b[i] == '1' && carry == '1')
            {
                s='1'+s;
                carry = '1';
            }
            else if(a[i] == '0' && b[i] == '0' && carry == '0')
            {
                s='0'+s;
                carry = '0';
            }
        }
        if(carry!='0')
        {
            s = '1'+s;
        }
        return s;
    }
