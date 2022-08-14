class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 1;
        int t1=0,t2=1,t3=1,ans=0;
        for (int i=3;i<n+1;i++)
        {
            ans=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=ans;
        }
        return ans;
        }
};