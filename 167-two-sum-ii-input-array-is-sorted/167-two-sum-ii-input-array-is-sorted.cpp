class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int e=numbers.size()-1,s=0;
        while (e>s)
        {
            int csum=numbers[e]+numbers[s];
            if (csum>target) e--;
            else if (csum<target) s++;
            else
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            }
        }
        return ans;
    }
};