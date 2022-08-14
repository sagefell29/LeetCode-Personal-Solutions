class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        int ans=0,fn1=1,fn2=1;
        for (int i=2;i<n+1;i++)
        {
            ans=fn2+fn1;
            fn1=fn2;
            fn2=ans;
        }
        return ans;
    }
};