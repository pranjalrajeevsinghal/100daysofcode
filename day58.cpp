//Qlink-> https://leetcode.com/problems/smallest-integer-divisible-by-k/description/
//Code

int smallestRepunitDivByK(int K) {
        if (K % 2 == 0)
        {
            return -1;
        }
        
        int num = 1;
        int res = 1;
        
        while (num % K) 
        {
            num = (num * 10 + 1) % K;
            res++;
            if (res > K)
            {
                return -1;
            }
        }
        return res;
    }
