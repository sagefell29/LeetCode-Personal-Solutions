class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length()>s2.length()) return 0;
        unordered_map<char,int> m;
        int size1=s1.length(), size2=s2.length();
        // int c=0;
        for (auto i:s1) m[i]++;
        for (int i=0;i<(size2-size1+1);i++)
        {
            string s=s2.substr(i,size1);
            unordered_map<char,int> check;
            for (auto j:s) check[j]++;
            if (check==m) return true;
            check.clear();
        }
        return false;
    }
};