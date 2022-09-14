class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0) return 0;
        int b=prices[0],p=0;
        for (int i=1;i<prices.size();i++)
        {
            b=min(b,prices[i]);
            p=max(p,prices[i]-b);
        }
        return p;
    }
};