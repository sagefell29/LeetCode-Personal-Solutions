class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0;
        for (int i:nums) rsum=rsum+i;
        for (int i=0;i<nums.size();i++)
        {
            rsum=rsum-nums[i];
            if (rsum==lsum) return i;
            lsum=lsum+nums[i];
        }
        return -1;
    }
};