class Solution {
public:
    void flood(vector<vector<int> > &image, int r, int c, int oldColor, int newColor){
        if(c+1 < image[0].size() && image[r][c+1] == oldColor){
            image[r][c+1] = newColor;
            flood(image, r, c+1, oldColor, newColor);
        }
        if(r+1 < image.size() && image[r+1][c] == oldColor){
            image[r+1][c] = newColor;
            flood(image, r+1, c, oldColor, newColor);
        }
        if(c-1 >= 0 && image[r][c-1] == oldColor){
            image[r][c-1] = newColor;
            flood(image, r, c-1, oldColor, newColor);
        }
        if(r-1 >= 0 && image[r-1][c] == oldColor){
            image[r-1][c] = newColor;
            flood(image, r-1, c, oldColor, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor == image[sr][sc]) return image;
        flood(image, sr, sc, image[sr][sc], newColor);
        image[sr][sc] = newColor;
        return image;
    }
};
