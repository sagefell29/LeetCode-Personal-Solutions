class Solution {
public:
    void cc(vector<vector<int>>& image, int sr, int sc, int color,int pcolor)
    {
        image[sr][sc]=color;
        if ((sc-1>-1) && (image[sr][sc-1]==pcolor)) cc(image,sr,sc-1,color,pcolor);
        if ((sr-1>-1) && (image[sr-1][sc]==pcolor)) cc(image,sr-1,sc,color,pcolor);
        if ((sr+1<image.size()) && (image[sr+1][sc]==pcolor)) cc(image,sr+1,sc,color,pcolor);
        if ((sc+1<image[0].size()) && (image[sr][sc+1]==pcolor)) cc(image,sr,sc+1,color,pcolor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int precolor=image[sr][sc];
        if (precolor==color) return image;
        cc(image,sr,sc,color,precolor);
        return image;
    }
};