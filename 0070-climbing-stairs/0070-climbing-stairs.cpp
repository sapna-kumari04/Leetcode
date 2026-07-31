class Solution {
public:
   int climbStairs(int n) {
    
       /* if(n==0|| n==1){
            return 1;
        }
      return climbStairs(n-1)+climbStairs(n-2);  */
       if (n == 1) return 1;
        if (n == 2) return 2;

        int prev2 = 1; 
        int prev1 = 2; 
        for (int i = 3; i <= n; i++) {
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;



    }
};