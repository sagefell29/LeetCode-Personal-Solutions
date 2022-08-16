class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows==1) return {{1}};
        vector<vector<int>> a={{1},{1,1}};
        if (numRows==2) return a;
        int i=2;
        while (i<numRows)
        {
            vector<int> a1={1};
            for (int j=1;j<i;j++) a1.push_back(a[i-1][j-1]+a[i-1][j]);
            a1.push_back(1);
            a.push_back(a1);
            i++;
        }
        return a;
        
    }
};