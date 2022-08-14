class Solution {
public:
    void cc(int m, int n, int i, int j, vector<vector<char>>& grid)
    {
        grid[i][j]='2';
        if ((i+1<m) && (grid[i+1][j]=='1')) cc(m,n,i+1,j,grid);
        if ((j+1<n) && (grid[i][j+1]=='1')) cc(m,n,i,j+1,grid);
        if ((i-1>-1) && (grid[i-1][j]=='1')) cc(m,n,i-1,j,grid);
        if ((j-1>-1) && (grid[i][j-1]=='1')) cc(m,n,i,j-1,grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size(), c=0;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (grid[i][j]=='1')
                {
                    c+=1;
                    cc(m,n,i,j,grid);
                }
            }
        }
        return c;
    }
};