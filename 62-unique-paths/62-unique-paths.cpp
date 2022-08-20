class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int> (m, 0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 && j == 0) dp[i][j] = 1;
                if(i - 1 >= 0) dp[i][j] += dp[i - 1][j];
                if(j - 1 >= 0) dp[i][j] += dp[i][j - 1];
            }
        }
        return dp[n - 1][m - 1];
    }
};


// void UP(int i, int j, int m, int n, int& ans)
    // {
    //     if (i+1==m || j+1==n || m==1 || n==1) return;
    //     ans+=1;
    //     UP(i+1,j,m,n,ans);
    //     UP(i,j+1,m,n,ans);
    // }
    

    // int ans=1;
    // UP(0,0,m,n,ans);
    // return ans;