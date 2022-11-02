class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return strs[0];
        // string s=""+strs[0],ans="";
        // for (int i=0;i<strs.size();i++)
        // {
        //     int j=0;
        //     string a=strs[i];
        //     while(j<a.length()&&j<s.length()&&a[j]==s[j]) j++;
        //     ans=s.substr(0,j);
        //     s=ans;
        // }
        string ans=strs[0];
        for (int i=0;i<strs.size();i++)
        {
            string curr=strs[i];
            int j=0;
            while (j<ans.length() && j<curr.length() && curr[j]==ans[j]) j++;
            ans=ans.substr(0,j);
        }
        return ans;
    }
};