class Solution {
public:
    int sumsquare(int n)
    {
        int ans=0,r=0;
        while (n>=1)
        {
            r=n%10;
            ans+=(r*r);
            n=n/10;
        }
        return ans;
    }
    
    bool isHappy(int n) 
    {
        int ans=sumsquare(n);
        while (ans!=1) 
        {
            if (ans==89) return false;
            ans=sumsquare(ans);
        }
        return true;
    }
};