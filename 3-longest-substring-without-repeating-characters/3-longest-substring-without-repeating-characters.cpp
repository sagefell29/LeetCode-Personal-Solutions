class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.length(),ans=0;
        if (n==0) return 0;
        set<char> a;
        while (r<n)
        {
            if (a.count(s[r])==0)
            {
                a.insert(s[r]);
                r++;
            }
            else
            {
                a.erase(s[l]);
                l++;
            }
            ans=max(ans,r-l);
        }
        return ans;
    }
};