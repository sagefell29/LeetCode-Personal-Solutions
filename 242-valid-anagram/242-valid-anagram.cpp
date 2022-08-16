class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl=s.size(),tl=t.size();
        if (sl!=tl) return false;
        unordered_map<char,int> sm,tm;
        for (char i:s) sm[i]++;
        for (char i:t) tm[i]++;
        if (sm==tm) return true;
        return false;
    }
};