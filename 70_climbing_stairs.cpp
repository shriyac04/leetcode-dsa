class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
         return n;
        vector<int> dp(n+1);
        for(int i=0;i<=2;i++)
        dp[i]=i;
        for(int i=3;i<=n;i++)
         dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
};


APPROACH-2

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int a = 1;  // Number of ways to climb 1 step
        int b = 2;  // Number of ways to climb 2 steps

        for (int i = 3; i <= n; ++i) {
            int current = a + b;
            a = b;
            b = current;
        }

        return b;
    }
};
