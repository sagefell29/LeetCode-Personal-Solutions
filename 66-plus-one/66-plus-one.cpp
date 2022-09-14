class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j=digits.size()-1,c=1;
        while (j>=0)
        {
            if (digits[j]!=9)
            {
                digits[j]++;
                return digits;
            }
            else
            {
                digits[j]=0;
                j--;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};