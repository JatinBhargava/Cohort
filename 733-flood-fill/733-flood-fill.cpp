class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newcolor,int row,int col,int source){
        
        if(sr < 0 || sc < 0 || sc >=col || sr>=row)
            return;
        
        else if(source != image[sr][sc])
            return;
        
        image[sr][sc] = newcolor;
        
        dfs(image,sr+1,sc,newcolor,row,col,source);
        dfs(image,sr-1,sc,newcolor,row,col,source);
        dfs(image,sr,sc+1,newcolor,row,col,source);
        dfs(image,sr,sc-1,newcolor,row,col,source);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
         
        if(newcolor == image[sr][sc])
            return image;
        
        int row = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        
        dfs(image,sr,sc,newcolor,row,col,source);
        return image;
    }
};