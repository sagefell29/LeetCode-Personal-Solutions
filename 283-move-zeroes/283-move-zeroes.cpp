class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,n=nums.size(),j=0;
        while (i<n)
        {
            if (nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        for (j;j<n;j++) nums[j]=0;
        return;
    }
};