class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        if (x<4) return 1;
        long long i=0;
        for (i;i<x;i++) if (i*i>x) break;
        return i-1;
    }
};