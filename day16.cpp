// Qlink-> https://leetcode.com/problems/smallest-value-of-the-rearranged-number/description/
//Code-

long long smallestNumber(long long num) {
        long long ans = 0;
        vector <int> v;
        if(num==0)
        {
            return 0;
        }
        while(num!=0)
        {
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int n = v.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            if((v[0]==0) && (v[i]!=0))
            {
                s=i;
                break;
            }
        }
        swap(v[0],v[s]);
        for(int i=n-1;i>=0;i--)
        {
            ans = ans + v[i]*pow(10,n-i-1);
        }
        return ans;   
    }
