class Solution {
public:
    vector<vector<int>> fill(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor){
        if (sr > 0 && image[sr-1][sc] == oldColor){
            // left
            image = floodFill(image, sr-1, sc, newColor);
        }
        if (sc > 0 && image[sr][sc-1] == oldColor){
            // up
            image = floodFill(image, sr, sc-1, newColor);
        }
        image[sr][sc] = newColor;
        if (sc < image[0].size()-1 && image[sr][sc+1] == oldColor){
            // down
            image = floodFill(image, sr, sc+1, newColor);
        }
        if (sr < image.size()-1 && image[sr+1][sc] == oldColor){
            // right
            image = floodFill(image, sr+1, sc, newColor);
        }
        return image;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) return image;
        return fill(image, sr, sc, image[sr][sc], newColor);
    }
};