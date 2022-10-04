class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i=1;i<=s.length();i++)
        {
            reverse(s.begin(),s.end());
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.begin()+1);
            if (s==goal) return true;
        }
        return false;
    }
};