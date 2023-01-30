//Qlink-> https://leetcode.com/problems/n-th-tribonacci-number/description/
//Code

int tribonacci(int n) {
        int t0 = 0;
        int t1 = 1;
        int t2 = 1;
        vector <int> v;
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else if(n==2)
        {
            return 1;
        }
        else
        {
        v.push_back(t0);
        v.push_back(t1);
        v.push_back(t2);
        int p = n-3;
        int tn = 0;
        while(p!=0)
        {
            tn = t0+t1+t2;
            t0 = t1;
            t1 = t2;
            t2 = tn;
            p--;
        }
        
        return t0+t1+t2;
        }
    }
