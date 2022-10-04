class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size()-1,i=0;
        while (n>i)
        {
            if (numbers[i]+numbers[n]==target) return {i+1,n+1};
            else if (numbers[i]+numbers[n]<target) i++;
            else n--;
        }
        return {i+1,n+1};
    }
};

// for (int i=0;i<n;i++) for (int j=i+1;j<n;j++) if (numbers[i]+numbers[j]==target) return {i+1,j+1};
// return {};