class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for (int i:nums1) m1[i]++;
        for (int i:nums2) m2[i]++;
        vector<int> ans;
        for (auto i:m1) 
        {
            if (m2[i.first]>1) 
            {
                if (i.second>m2[i.first]) for (int j=0;j<m2[i.first];j++) ans.push_back(i.first);
                else for (int j=0;j<i.second;j++) ans.push_back(i.first);
            }
            else if (m2[i.first]==1) ans.push_back(i.first);
        }
        return ans;
    }
};