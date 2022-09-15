class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r2=mat.size(),c2=mat[0].size(),c1=0;
        if (r*c!=r2*c2) return mat;
        vector<int> a;
        for (auto i: mat) for (int j:i) a.push_back(j);
        mat.clear();
        for (int i=0;i<r;i++)
        {
            vector<int> ans;
            for (int j=0;j<c;j++)
            {
                ans.push_back(a[c1]);
                c1++;
            }
            mat.push_back(ans);
        }
        a.clear();
        return mat;
    }
};