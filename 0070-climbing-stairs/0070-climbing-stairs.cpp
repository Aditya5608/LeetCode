class Solution {
public:
    int climbStairs(int n) {
        if (n <=3) return n;

        int prev1 = 3;
        int prev2 = 2;
        int cur = 0;

        for (int i = 3; i < n; i++) {
            cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }

         return cur;   
        // if(n==0) return 1;
        // if(n==1) return 1;
        // return climbStairs(n-1)+climbStairs(n-2);
      
       
    }
};