class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for (auto i:logs)
        {
            if (i=="./") continue;
            else if (i=="../" && ans!=0) ans--;
            else if (i=="../" && ans==0) continue;
            else ans++;
        }
        if (ans<0) return 0;
        return ans;
    }
};