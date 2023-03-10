//Qlink-> https://leetcode.com/problems/smallest-value-after-replacing-with-sum-of-prime-factors/description/
//Code

long long solve(int n){
        long long ans=0;
        int d = 2;
        while(n>1){
            if(n%d==0){
                n/=d;
                ans+=d;
            }else{
                d++;
            }
        }
        return ans;
    }
    int smallestValue(int n) {
        while(true){
            int k = solve(n);
            if(k==n)break;
            n=k;
        }
        return n;
    }
