class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c=0,count=0;
        unordered_map<char,int> rn,m;
        for (auto i:ransomNote) 
        {
            rn[i]++;
            count++;
        }
        for (auto i:magazine) m[i]++;
        for (auto i:m) if (i.second>=rn[i.first]) c+=rn[i.first];
        if (c==count) return true;
        return false;
    }
};