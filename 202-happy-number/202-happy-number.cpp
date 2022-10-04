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
        set<int> a;
        int ans=sumsquare(n);
        while (ans!=1) 
        {
            if (a.find(ans)==a.end()) 
            {
                a.insert(ans);
                ans=sumsquare(ans);
            }
            else return false;
        }
        return true;
    }
};