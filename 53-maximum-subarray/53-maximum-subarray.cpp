class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),c=0,m=nums[0];
        for (int i=0;i<n;i++)
        {
            if (nums[i]<0) ++c;
            if (m<nums[i]) m=nums[i];
        }
        if (c!=n)
        {
            int s=0,ms=0;
            for(int i=0;i<n;i++)
            {
                s=max(s+nums[i],nums[i]);
                ms=max(s,ms);
            }    
            return ms;
        }
        else return m;
    }
};