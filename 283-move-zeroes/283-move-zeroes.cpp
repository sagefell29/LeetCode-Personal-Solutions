class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,n=nums.size();
        while (i<n)
        {
            if (nums[i]==0)
            {
                int j=i;
                while (nums[j]==0 && j<n-1) j++;
                swap(nums[j],nums[i]);
            }
            i++;
        }
    }
};