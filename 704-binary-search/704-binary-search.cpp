class Solution {
public:
    int search(vector<int>& nums, int target) {
        int b=0,e=nums.size()-1,mid;
        while (b<=e)
        {
            mid=(b+e)/2;
            if (nums[mid]>target)e=mid-1;
            else if (nums[mid]<target) b=mid+1;
            else if (nums[mid]==target) return mid;
        }
        return -1;
    }
};