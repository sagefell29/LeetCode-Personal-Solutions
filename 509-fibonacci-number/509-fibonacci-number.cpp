class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        int ans=0;
        vector<int> f={0,1};
        for (int i=2;i<n+1;i++)
        {
            ans=f[i-1]+f[i-2];
            f.push_back(ans);
        }
        return ans;
    }
};