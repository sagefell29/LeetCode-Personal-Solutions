class Solution {
public:
      bool equal(int a[], int b[]) {
        for (int i=0; i<26; i++) {
            if (a[i]!=b[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int a[26]={0}, b[26]={0};
        vector<int> c;
        if (s.size()<p.size()) return c;
        int n=(int)s.size(), m=(int)p.size();
        for (int i=0; i<m; i++) {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        if (equal(a,b)==true) c.push_back(0);
        for (int i=0; i<n-m; i++) {
            b[s[i+m]-'a']++;
            b[s[i]-'a']--;
            if (equal(a,b)==true) c.push_back(i+1);
        }
        return c;
    }
};