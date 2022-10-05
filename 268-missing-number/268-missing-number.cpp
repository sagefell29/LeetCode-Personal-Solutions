class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for (int i=1;i<n;i++) if (nums[i]!=(nums[i-1]+1)) return (nums[i]-1);
        if (nums[0]==0) return n;
        else return 0;
    }
};