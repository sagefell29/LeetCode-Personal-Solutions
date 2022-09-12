class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for (int i:nums) 
        {
            ans[i]++;
            if (ans[i]>1) return true;
        }
        
        return false;
    }
};