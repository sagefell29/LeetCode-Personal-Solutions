class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for (char i:s)
        {
            if (i==' ')
            {
                reverse(temp.begin(),temp.end());
                ans = ans+temp;
                ans=ans+" ";
                temp="";
            }
            else temp+=i;
        }
        reverse(temp.begin(),temp.end());
        ans = ans+temp;
        return ans;
    }
};