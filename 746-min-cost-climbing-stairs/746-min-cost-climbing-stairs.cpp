class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if (n<2) return 0;
        for (int i=2;i<n;i++) cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
        return min(cost[n-1],cost[n-2]);
    }
};



// int n=cost.size();
        // if (n==0) return 0;
        // if (n==1) return cost[0];
        // int w,i;
        // if (cost[0]<cost[1]) 
        // {
        //     w=cost[0];
        //     i=0;
        // }
        // else
        // {
        //     w=cost[1];
        //     i=1;
        // }
        // while (i<n-2)
        // {
        //     if (cost[i+1]<cost[i+2])
        //     {
        //         i+=1;
        //         w+=cost[i+1];
        //     }
        //     else 
        //     {
        //         i+=2;
        //         w+=cost[i+2];
        //     }
        // }
        // return w;